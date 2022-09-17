class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size()!=w2.size())return false;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto i:w1)v1[i-'a']=1;
        for(auto i:w2)v2[i-'a']=1;
        if(v1!=v2)return false;
        vector<int>v11(26,0);
        vector<int>v22(26,0);
        for(auto i:w1)v11[i-'a']++;
        for(auto i:w2)v22[i-'a']++;
        sort(v11.begin(),v11.end());
        sort(v22.begin(),v22.end());
        if(v11==v22)return true;
        return false;
    }
};