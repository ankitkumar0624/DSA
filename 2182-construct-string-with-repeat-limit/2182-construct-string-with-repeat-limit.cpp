class Solution {
public:
    string repeatLimitedString(string s, int limit){
        int cnts[26]={};
        string ans="";
        for(auto c:s)cnts[c-'a']++;
        while(true){
            int i=25;
            bool onlyone=false;
            for(;i>=0;i--){
                if(ans.size()>0  && i==ans.back()-'a'&& cnts[i]){
                    onlyone=true;
                    continue;
                }
                if(cnts[i])break;
            }
            if(i==-1)break;
            int fill=onlyone?1:min(limit,cnts[i]);
            cnts[i]-=fill;
            while(fill--){
                ans+=i+'a';
            }
        }
        return ans;
    }
};