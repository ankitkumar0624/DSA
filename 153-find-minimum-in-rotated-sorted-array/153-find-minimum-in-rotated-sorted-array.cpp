class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),l=0,r=n-1,ans=INT_MAX;
        while(r>=l){
            int m=(l+r)/2;
            ans=min(nums[m],ans);
            if(nums[m]>=nums[l]){
                ans=min(ans,nums[l]);
                l=m+1;
            }else{
                ans=min(nums[m+1],ans);
                r=m-1;
            }
        }
        return ans;
    }
};