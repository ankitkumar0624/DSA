class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        umap[0] = 1;
        int sum  = 0;
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem = (sum%k+k)%k;
            ans+=umap[rem];
            umap[rem]++;    
        }
        return ans;
    }
};