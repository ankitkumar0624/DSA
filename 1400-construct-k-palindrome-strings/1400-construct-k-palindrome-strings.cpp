class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.size();
        if(k>n) return false;
        unordered_map<char,int>mp;
        for(auto x:s)mp[x]++;
        int o_cnts=0;
        for(auto x:mp)if(x.second%2==1)o_cnts++;
        if(o_cnts>k) return false;
        return true;
    }
};