class Solution {
public:
    int longestPalindrome(string s) {
        int len=0;
        vector<int>odd;
        unordered_map<char,int>mp;
        for(auto x:s)mp[x]++;
        for(auto x:mp){
            if(x.second%2==0){
                len+=x.second;
            }else{
                odd.push_back(x.second);
            }
        }
        sort(odd.begin(),odd.end());
        if(odd.size()>0)len+=odd[0];
        for(int i=1;i<odd.size();i++){
            if(odd[i]-1!=0){
                len+=odd[i]-1;
            }
        }
        return len;
    }
};