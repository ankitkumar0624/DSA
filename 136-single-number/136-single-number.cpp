class Solution {
public:
    int singleNumber(vector<int>& A) {
        int res=0 ,n=A.size();
        for(int i=0;i<n;i++)res=res^A[i];
        return res;
    }
};