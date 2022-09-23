class Solution {
public:
    int concatenatedBinary(int n){
        int long long  ans=0,mod=1e9+7;
        for(int i=1;i<=n;i++){
            int len=numberOfbits(i);
            ans=((ans<<len)%mod+i)%mod;
        }
        return ans;
    }
    int numberOfbits(int n){
        return log2(n)+1;
    }
};