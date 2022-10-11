class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int start=-1,maxlen=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])!=0)start=max(start,mp[s[i]]);
            mp[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};