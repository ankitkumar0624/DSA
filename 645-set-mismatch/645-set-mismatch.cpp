class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)mp[nums[i]]++;
        for(int i=1;i<=n;i++){
            if(mp[i]==2){
                ans.push_back(i);
            }
        }
        for(int i=1;i<=n;i++){
             if(mp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};