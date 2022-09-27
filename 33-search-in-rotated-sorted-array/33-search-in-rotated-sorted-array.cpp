class Solution {
public:
    int search(vector<int>& nums, int k) {
        int n=nums.size(),l=0,r=n-1;
        while(r>=l){
            int m=(l+r)/2;
            if(nums[m]==k) return m;
            if(nums[l]<=nums[m]){
                if(k>=nums[l]&&k<=nums[m]){
                    r=m-1;
                }else{
                    l=m+1;
                }
            }else{
                if(k>=nums[m+1]&&k<=nums[r]){
                    l=m+1;
                }else{
                    r=m-1;
                }
            }
        }
        return -1;
    }
};