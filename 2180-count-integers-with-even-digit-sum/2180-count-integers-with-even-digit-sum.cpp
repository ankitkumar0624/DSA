class Solution {
public:
    int countEven(int num) {
        int cnts=0;
        for(int i=1 ;i<=num ;i++){
            int n=i;
            int sum=0;
            while(n){
                int rem=n%10;
                sum+=rem;
                n=n/10;
            }
            if(sum%2==0)cnts++;
        }
        return cnts;
    }
};