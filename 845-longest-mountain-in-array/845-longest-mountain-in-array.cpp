class Solution {
public:
    int longestMountain(vector<int>& A){
        int n=A.size();
        int len=INT_MIN;
        if(n<3) return 0;
        vector<int> left(n,0),right(n,0);
        for(int i=n-2;i>=0;i--)if(A[i]>A[i+1])right[i]=right[i+1]+1;
        for(int i=1;i<n;i++){
            if(A[i-1]<A[i])left[i]=left[i-1]+1;
            if(left[i]&&right[i])len=max(len,left[i]+right[i]+1);
        }
        return len==INT_MIN?0:len;
    }
};