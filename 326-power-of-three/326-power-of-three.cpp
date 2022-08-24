class Solution {
public:
    bool isPowerOfThree(int n) {
        bool flag =false;
        if(n<0)flag=true;
        while(n>1){
            if(n%3!=0) return false;
            if(flag){
                n/=(-3);
            }else{
                n/=3;
            }
        }
        return n==1;
    }
};