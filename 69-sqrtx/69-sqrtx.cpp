class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int l=1 ,r=x ,ans=-1;
        while(l<=r){
            long long int mid=l+(r-l)/2;
            if(mid==x/mid){
                ans=mid;
                break;
            }else if(mid>x/mid){
                r=mid-1;
            }else{
                l=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};