class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost){
        cost.push_back(0);
        int n=cost.size(),n1=n-1;
        vector<int>tmp;
        for(int i=0;i<cost.size();i++){
            if(i!=0)tmp.push_back(cost[i]);
        }
        vector<int>dp(n,-1);
        int ans=f(cost,dp,n-1);
        for(auto i:dp)cout<<i<<" ";
        vector<int>dp1(n,-1);
        int ans1=f(tmp,dp1,n1-1);
        return min(ans,ans1);
    }
    int f(vector<int>&cost ,vector<int>&dp ,int ind){
        if(ind==0)return 0;
        if(dp[ind]!=-1) return dp[ind];
        int l=f(cost,dp,ind-1)+cost[ind-1];
        int r=INT_MAX;
        if(ind>1)r=f(cost,dp,ind-2)+cost[ind-2];
        return dp[ind]=min(l,r);
    }
};