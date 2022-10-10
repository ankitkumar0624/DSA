class Solution {
public:
    string breakPalindrome(string P) {
        int n=P.size();
        n=n/2;
        for(int i=0;i<n;i++){
            if(P[i]-'a'>0){
                P[i]='a';
                return P;
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            if(P[i]!='a') flag=false;
        }
        if(flag&&P.size()>1){
            P[(int)P.size()-1]='b';
            return P;
        }
        return "";
    }
};