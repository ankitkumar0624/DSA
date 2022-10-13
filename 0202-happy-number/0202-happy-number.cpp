class Solution{
public:
    int Square(int n){
        int sum=0 ,rem;
        while(n){
            rem=n%10;
            sum+=rem*rem;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n ,fast=n;
        do{
            slow=Square(slow);
            fast=Square(fast);
            fast=Square(fast);
        }while(slow!=fast);
        if(slow==1) return 1;
        return 0;
    }
};