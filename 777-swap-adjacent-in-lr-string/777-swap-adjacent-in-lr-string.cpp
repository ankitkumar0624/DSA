class Solution {
public:
    bool canTransform(string st, string en) {
        int n=st.size(),i=0,j=0;
        while(i<=n&&j<=n){
            while(i<n&&st[i]=='X')i++;
            while(j<n&&en[j]=='X')j++;
            if(i==n || j==n)return i==n&&j==n;
            if(st[i]!=en[j])return false;
            if(st[i]=='L'){
                if(i<j)return false;
            }else if(st[i]=='R'){
                if(i>j) return false;
            }
            i++;
            j++;
        }
        return true;
    }
};