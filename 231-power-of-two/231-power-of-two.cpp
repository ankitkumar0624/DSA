class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag=false;
        if(n<0)flag=true;
        while(n>1){
            if(n%2!=0) return false;
            if(flag){
                n/=(-2);
            }else{
                n/=2;
            }
        }
        return n==1;
    }
};