class Solution {
public:
    string minWindow(string s, string t) {
        int left=0,right=0,window=t.size(),len=s.size(),minstart=-1,minlen=INT_MAX;
        int counter=window;
        vector<int>mp(128,0);
        for(auto x:t)mp[x]++;
        while(right<len){
            if(mp[s[right]]>0){
                counter--;
            }
            mp[s[right]]--;
            right++;
            while(counter==0){
                if(right-left<minlen){
                    minlen=right-left;
                    minstart=left;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0){
                    counter++;
                }
                left++;
            }
        }
        return minlen==INT_MAX?"":s.substr(minstart,minlen);
    }
};