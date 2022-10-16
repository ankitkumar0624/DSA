class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++){
            int ri=0;
            int k=i;
            while(k){
                int last=k%10;
                k/=10;
                ri=ri*10+last;
            }
            if(i+ri==num)return 1;
        }
        return 0;
    }
};