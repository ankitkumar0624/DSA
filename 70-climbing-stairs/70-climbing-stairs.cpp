class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            int l=0,r=0;
            if(i>1)l=dp[i-2];
            r=dp[i-1];
            dp[i]=l+r;
        }
        return dp[n];
    }
};