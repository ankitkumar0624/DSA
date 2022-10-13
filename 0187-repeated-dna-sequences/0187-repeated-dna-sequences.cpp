class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s){
        unordered_map<string,int>mp;
        vector<string>res;
        for(int i=0;i<s.size();i++){
            string tmp="";
            for(int j=i;j<s.size()&&j<i+10;j++){
                tmp+=s[j];
            }
            if(tmp.size()==10)mp[tmp]++;
        }
        for(auto i:mp)if(i.second>1)res.push_back(i.first);
        return res;
    }
};