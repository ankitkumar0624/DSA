class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=amount;
        long long int dp[n+1];
        dp[0]=0;
        for(int i=1;i<n+1;i++)dp[i]=INT_MAX;
        for(int i=1 ;i<n+1;i++){
            for(int j=0;j<coins.size();j++){
                if(coins[j]<=i){
                   if(dp[i-coins[j]]!=INT_MAX){
                        dp[i]=min(dp[i],dp[i-coins[j]]+1);
                   }
                }
            }
        }
        return dp[n]==INT_MAX?-1:dp[n];
    }
};