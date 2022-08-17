class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.size() ,n=str2.size();
        vector<vector<string>>dp(m+1,vector<string>(n+1,""));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+str1[i-1];
                }else{
                    dp[i][j]=dp[i][j-1].size()>dp[i-1][j].size()?dp[i][j-1]:dp[i-1][j];
                }
            }
        }
        string LCS=dp[m][n];
        int i=0 ,j=0;
        string res="";
        for(auto x:LCS){
            while(str1[i]!=x){
                res+=str1[i++];
            }
            while(str2[j]!=x){
                res+=str2[j++];
            }
            res+=x;
            i++;
            j++;
        }
        return res+str1.substr(i)+str2.substr(j);
    }
};