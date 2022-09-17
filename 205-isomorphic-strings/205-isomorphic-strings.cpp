class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,char>mp;
        unordered_map<char,char>mp1;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end() ||mp1.find(t[i])!=mp.end()){
                if(mp[s[i]]!=t[i])return false;
                if(mp1[t[i]]!=s[i])return false;
            }else{
                mp[s[i]]=t[i];
                mp1[t[i]]=s[i];
            }
        }
        return true;
    }
};