class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int m=amount ,n=coins.size();
        int dp[m+1][n+1];
        for(int i=0 ;i<=n;i++)dp[0][i]=1;
        for(int i=0 ;i<=m;i++)dp[i][0]=0;
        for(int i=1 ;i<=m ;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=dp[i][j-1];
                if(coins[j-1]<=i){
                        dp[i][j]+=dp[i-coins[j-1]][j];
                    }
            }
        }
        return dp[m][n];
    }
};