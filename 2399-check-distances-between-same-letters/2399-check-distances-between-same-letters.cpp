class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        vector<int>v(26,0);
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                v[s[i]-'a']=i-mp[s[i]]-1;
            }else{
                mp[s[i]]=i;
            }
        }
        for(int i=0;i<s.size();i++)if(v[s[i]-'a']!=d[s[i]-'a'])return false;
        return true;
    }
};