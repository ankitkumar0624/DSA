class Solution {
public:
    string reverseWords(string s) {
      int l=0,r=0;
        for(l,r;r<s.size()&&l<s.size();r++){
            if(s[r]==' '){
                reverse(s.begin()+l,s.begin()+r);
                if(r+1<s.size())l=r+1;
            }
        }
        if(l!=s.size()){
            reverse(s.begin()+l,s.begin()+r);
        }
        return s;
    }
};