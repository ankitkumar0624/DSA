class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1,m=b.size()-1;
        int carry=0;
        string ans="";
        while(n>=0 || m>=0|| carry>0){
            if(n>=0){
                carry+=a[n]-'0';
                n--;
            }
            if(m>=0){
                carry+=b[m]-'0';
                m--;
            }
            ans+=(carry%2)+'0';
            carry/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};