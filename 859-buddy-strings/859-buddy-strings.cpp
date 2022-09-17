class Solution {
public:
    bool buddyStrings(string s, string g) {
        if(s.size()!=g.size() || s.size()<2) return false;
        vector<int>v1(26,0);
        for(auto i:s)v1[i-'a']++;
        vector<int>v2(26,0);
        for(auto i:g)v2[i-'a']++;
        if(v1!=v2)return false;
        int cnts=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=g[i])cnts++;
        }
        if(cnts==2) return true;
        if(cnts==0){
            for(auto i:v1)if(i>=2)return true;
        }
        return false;
    }
};