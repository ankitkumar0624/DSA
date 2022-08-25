class Solution {
public:
    vector<string> commonChars(vector<string>& W) {
        vector<int>cnt(26,INT_MAX);
        for(auto x:W){
            vector<int>cnt1(26,0);
            for(auto c:x)cnt1[c-'a']++;
            for(int i=0 ;i<26;i++){
                cnt[i]=min(cnt1[i],cnt[i]);
            }
        }
        vector<string>ans;
        for(int i=0 ;i<26;i++){
            for(int j=0;j<cnt[i];j++){
                string s="";
                s+=i+'a';
                ans.push_back(s);
            }
        }
        return ans;
    }
};