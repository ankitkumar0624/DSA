class Solution {
public:
    string reverseWords(string s) {
        int l=0,r=0;
        for(l,r;l<s.size()&&r<s.size();r++){
            if(s[r]==' '){
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
        }
        reverse(s.begin()+l,s.begin()+r);
        return s;
    }
};