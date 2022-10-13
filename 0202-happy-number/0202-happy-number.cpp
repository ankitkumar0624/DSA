class Solution {
public:
    bool isHappy(int n){
        unordered_set<int>st;
        int k=n;
        while(true){
            int sum=0 ,rem;
            while(k){
                rem=k%10;
                sum+=rem*rem;
                k/=10;
            }
            k=sum;
            if(st.find(k)!=st.end()){
                if(k==1) return 1;
                else return 0;
            }
            st.insert(k);
        }
        return 1;
    }
};