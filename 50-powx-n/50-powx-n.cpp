class Solution {
public:
    double myPow(double x, int n) {
        double res=1;
        while(n){
            if(n%2==1 ||n%2==-1){
                if(n>0){
                    res*=x;
                }
                if(n<0){
                    res*=(1/x);
                }
            }
            x=x*x;
            n=n/2;
        }
        return res;
    }
};