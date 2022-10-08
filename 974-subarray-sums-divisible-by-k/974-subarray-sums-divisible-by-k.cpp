class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        umap[0] = 1;
        int sum  = 0;
        int ans = 0;
        int n = nums.size();
        cout<<nums[0]%k<<endl;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem = sum%k;
            if(rem<0) rem+=k;
            ans+=umap[rem];
            umap[rem]++;    
        }
        return ans;
    }
};