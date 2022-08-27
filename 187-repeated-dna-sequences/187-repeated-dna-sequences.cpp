class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string ,int>mp;
        int left=0,window=10,right=0,len=s.size();
        string s1="";
        vector<string>res;
        if(s.size()<10)return res;
        while(right<window)s1+=s[right++];
        mp[s1]++;
        while(right<len){
            s1+=s[right];
            right++;
            left++;
            mp[s1.substr(left,right-left)]++;
        }
        for(auto x:mp)if(x.second>1)res.push_back(x.first);
        return res;
    }
};