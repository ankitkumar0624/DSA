class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans=climb(dp,n);
        return ans;
    }
    int climb(vector<int>&dp ,int ind){
        if(ind==0) return 1;
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int left=climb(dp,ind-2);
        int right=climb(dp,ind-1);
        return dp[ind]=left+right;
    }
};