class Solution {
public:
    bool checkInclusion(string p, string s) {
        int window=p.size(),len=s.size() ,left=0 ,right=0;
        if(window>len)return false;
        vector<int>p1(26,0);
        vector<int>s1(26,0);
        while(right<window){
            p1[p[right]-'a']++;
            s1[s[right]-'a']++;
            right++;
        }
        right-=1;
        while(right<len){
            if(s1==p1) return true;
            right+=1;
            if(right!=len){
                s1[s[right]-'a']+=1;
            }
            s1[s[left]-'a']-=1;
            left++;
        }
        return false;
    }
};