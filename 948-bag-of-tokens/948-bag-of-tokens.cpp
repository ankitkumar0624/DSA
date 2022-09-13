class Solution {
public:
    int bagOfTokensScore(vector<int>& T, int p) {
        sort(T.begin(),T.end());
        int n=T.size();
        if(n==0) return 0;
        int ans=0,l=0,r=n-1,cnts=0;
        while(r>=l){
            if(p>=T[l]){
                p-=T[l];
                cnts++;
                ans=max(ans,cnts);
                l++;
            }else if(cnts>0){
                p+=T[r];
                r--;
                cnts--;
                ans=max(ans,cnts);
            }else{
                break;
            }
        }
        return ans;
    }
};