class Solution {
public:
    int partitionArray(vector<int>& A, int k) {
        int n=A.size();
        sort(A.begin(),A.end());
        int cnts=0;
        for(int i=n-1;i>=0;i--){
            int diff=A[i]-k;
            cnts++;
            if(i-1>=0)i--;
            while(i>=0&&A[i]>=diff)i--;
            if(i<n)i+=1;
            
        }
        return cnts;
    }
};