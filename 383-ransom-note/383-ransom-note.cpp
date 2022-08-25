class Solution {
public:
    bool canConstruct(string r, string m) {
        vector<int>mp(26,0);
        vector<int>mp1(26,0);
        for(auto x:r)mp[x-'a']++;
        for(auto x:m)mp1[x-'a']++;
        for(int i=0;i<26;i++){
            if(mp[i]!=0){
                if(mp[i]>mp1[i]) return false;
            }
        }
        return true;
    }
};