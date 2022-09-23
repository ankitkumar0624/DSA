class Solution {
public:
    int concatenatedBinary(int n) {
        long ans=0,mod=1e9+7;
        for(int i=1;i<=n;i++){
            int len=binaryCounts(i);
            ans=((ans<<len)%mod+i);
            ans%=mod;
        }
        return ans;
    }
    int binaryCounts(int i){
        return log2(i)+1;
    }
};