class Solution {
public:
    const int INF=INT_MAX;
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++)dp[i]=INF;
        for(int i=1;i<n;i++){
            for(int j=0 ;j<i;j++){
                if(j+nums[j]>=i){
                    if(nums[j]!=INF){
                        dp[i]=min(dp[i],dp[j]+1);
                    }
                }
            }
        }
        return dp[n-1];
    }
};