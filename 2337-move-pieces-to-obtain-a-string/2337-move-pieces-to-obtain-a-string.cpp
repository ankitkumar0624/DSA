class Solution {
public:
    bool canChange(string st, string target) {
        int n=st.size();
        int i=0 ,j=0;
        while(i<=n&&j<=n){
            while(st[i]=='_'){
                i++;
            }
            while(target[j]=='_'){
                j++;
            }
            if(i==n||j==n) return i==n&&j==n;
            if(st[i]!=target[j]) return false;
            if(st[i]=='L'){
                if(j>i)return false;
            }else if(st[i]=='R'){
                if(i>j)return false;
            }
            i++;
            j++;
        }
        return true;
    }
};