class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)mp[i]++;
        int len=0;
        vector<int>odd;
        for(auto i:mp){
            if(i.second%2==0)len+=i.second;
            else odd.push_back(i.second);
        }
        sort(odd.begin(),odd.end());
        if(odd.size()>=1){
            len+=odd[0];
            for(int i=1;i<odd.size();i++)len+=odd[i]-1;
        }
        return len;
    }
};