class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size() ,l=0 ,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if((mid!=0&&mid!=n-1)&&(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1])){
                if(arr[0]<arr[mid]&&arr[mid]>arr[n-1]) return mid;
            }else if(mid>0&&arr[mid-1]>arr[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
};