class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,0);
        int len=INT_MIN,left=0 ,right=0 ,n=s.size();
        int tmp=0;
        while(right<n){
            if(mp[s[right]]==0){
                mp[s[right]]++;
                tmp++;
                len=max(tmp,len);
                right++;
                continue;
            }
            while(mp[s[right]]!=0){
                mp[s[left]]--;
                left++;
                tmp--;
            }
        }
        return len==INT_MIN?0:len;
    }
};