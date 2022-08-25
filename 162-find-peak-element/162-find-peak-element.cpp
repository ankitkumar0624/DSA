class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(), l=0 ,r=n-1;
        while(r>=l){
            int mid=l+(r-l)/2;
            if((mid==0 || nums[mid-1]<=nums[mid])&&(mid==n-1 ||nums[mid]>=nums[mid+1])){
                return mid;
            }else if(mid>0&&nums[mid-1]>=nums[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
};