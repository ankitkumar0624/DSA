class Solution {
public:
    int findMin(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin(),nums.end());
        arr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)if(nums[i]!=nums[i-1])arr.push_back(nums[i]);
        int l=0 ,r=arr.size()-1,minVal=INT_MAX;
        while(r>=l){
            int mid=l+(r-l)/2;
            if(arr[l]<=arr[mid]){
                minVal=min(minVal,arr[l]);
                l=mid+1;
            }else{
                minVal=min(arr[mid],minVal);
                r=mid-1;
            }
        }
        return minVal;
    }
};