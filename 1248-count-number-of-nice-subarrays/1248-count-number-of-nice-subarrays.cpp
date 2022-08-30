class Solution {
public:
    int numberOfSubarrays(vector<int>&A, int k) {
        return atmost(A,k)-atmost(A,k-1);
    }
    int atmost(vector<int>&A,int k){
        long long int res=0;
        int l=0,n=A.size();
        for(int r=0;r<n;r++){
            k-=A[r]%2;
            while(k<0){
                k+=A[l]%2;
                l++;
            }
            res+=r-l+1;
        }
        return res;
    }
};