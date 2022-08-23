class Solution {
public:
    int maximumTop(vector<int>& A, int k) {
        int n=A.size();
        if(k==0) return A[0];
        if(k==1) return n>1?A[1]:-1;
        if(n==1) return k%2==0?A[0]:-1;
        int mx=INT_MIN;
        for(int i=0;i<min(k-1,n);i++){
            if(A[i]>mx)mx=A[i];
        }
        if(n>k)mx=max(mx,A[k]);
        return mx;
    }
};