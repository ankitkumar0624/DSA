class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        int ans=f(nums,dp,n-1);
        return ans;
    }
    int f(vector<int>&nums ,vector<int>&dp ,int ind){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick=f(nums,dp,ind-2)+nums[ind];
        int not_pick=f(nums,dp,ind-1)+0;
        return dp[ind]=max(pick,not_pick);
    }
};