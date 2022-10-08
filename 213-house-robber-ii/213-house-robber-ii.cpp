class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>tmp1,tmp2;
        for(int i=0;i<n;i++){
            if(i!=0)tmp1.push_back(nums[i]);
            if(i!=n-1)tmp2.push_back(nums[i]);
        }
        vector<int>dp(n-1,-1);
        int ans=f(tmp1,dp,n-2);
        vector<int>dp1(n-1,-1);
        int ans1=f(tmp2,dp1,n-2);
        return max(ans1,ans);
    }
    int f(vector<int>&tmp ,vector<int>&dp ,int ind){
        if(ind==0) return tmp[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int p=f(tmp,dp,ind-2)+tmp[ind];
        int np=f(tmp,dp,ind-1)+0;
        return dp[ind]=max(p,np);
    }
};