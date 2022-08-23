class Solution {
public:
    int findKthPositive(vector<int>& A, int k) {
        int l=0 ,r=A.size(),m;
        while(r>l){
            m=(r+l)/2;
            if(A[m]-m-1<k){
                l=m+1;
            }else if(A[m]-m-1>=k){
                r=m;
            }
        }
        return l+k;
    }
};