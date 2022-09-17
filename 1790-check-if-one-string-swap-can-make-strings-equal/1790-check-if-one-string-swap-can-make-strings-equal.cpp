class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnts=0;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto i:s1)v1[i-'a']++;
        for(auto i:s2)v2[i-'a']++;
        if(v1!=v2)return false;
        for(int i=0 ;i<s1.size();i++){
            if(s1[i]!=s2[i])cnts++;
        }
        if(cnts==0 || cnts==2)return true;
        return false;
    }
};