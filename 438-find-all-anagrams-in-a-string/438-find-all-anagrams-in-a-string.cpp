class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>p1(26,0);
        vector<int>s1(26,0);
        int left=0 ,right=0 ,window=p.size(),len=s.size();
        if(window>len)return {};
        while(right<window){
            p1[p[right]-'a']++;
            s1[s[right]-'a']++;
            right++;
        }
        right-=1;
        vector<int>ans;
        while(right<len){
            if(p1==s1){
                ans.push_back(left);
            }
            right+=1;
            if(right!=len){
                s1[s[right]-'a']+=1;
            }
            s1[s[left]-'a']-=1;
            left+=1;
        }
        return ans;
    }
};