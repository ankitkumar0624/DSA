class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0 ,r=nums.size()-1;
        int minVal=INT_MAX;
        while(r>=l){
            int mid=l+(r-l)/2;
            if(nums[l]<=nums[mid]){
                minVal=min(nums[l],minVal);
                l=mid+1;
            }else{
                minVal=min(nums[mid],minVal);
                r=mid-1;
            }
        }
        return minVal;
    }
};