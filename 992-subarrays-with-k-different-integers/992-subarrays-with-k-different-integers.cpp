class Solution {
public:
    int subarraysWithKDistinct(vector<int>&A, int k) {
        return almost(A,k)-almost(A,k-1);
    }
    unordered_map<int,int>mp;
    int almost(vector<int>&A ,int k){
        long long int res=0;
        int l=0,n=A.size();
       for(int r=0;r<n;r++){
            mp[A[r]]++;
         while(mp.size()>k){
            mp[A[l]]--;
            if(mp[A[l]]==0)mp.erase(A[l]);
            l++;
            }
        res+=r-l+1;
       }
    mp.clear();
    return res;
    }
};