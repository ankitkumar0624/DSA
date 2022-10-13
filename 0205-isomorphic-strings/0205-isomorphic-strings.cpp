class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return 0;
        unordered_map<char,char>mp,mp1;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(t[i]!=mp[s[i]])return false;
            }else{
               if(mp1.find(t[i])==mp1.end()){
                   mp[s[i]]=t[i];
                   mp1[t[i]]=s[i];
               }else{
                   return false;
               }
            }
        }
        return true;
    }
};