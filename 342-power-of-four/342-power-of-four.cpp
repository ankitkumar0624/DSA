class Solution {
public:
    bool isPowerOfFour(int n) {
        bool flag=false;
        if(n<0)flag=true;
        while(n>1){
            if(n%4!=0) return false;
            if(flag){
                n/=(-4);
            }else{
                n/=4;
            }
        }
        return n==1;
    }
};