class Solution {
public:
    const int INF=10e7;
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size() ,n=nums2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-INF));
        for(int i=1 ;i<=m ;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=max(max(nums1[i-1]*nums2[j-1],dp[i-1][j-1]+nums1[i-1]*nums2[j-                       1]),max(dp[i][j-1],dp[i-1][j]));
            }
        }
        return dp[m][n];
    }
};