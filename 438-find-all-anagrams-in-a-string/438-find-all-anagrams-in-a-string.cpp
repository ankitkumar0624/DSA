class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>A(26,0);
        vector<int>B(26,0);
        int left=0 ,right=0,window=p.size(),len=s.size();
        if(window>len) return {};
        while(right<window){
            A[p[right]-'a']++;
            B[s[right]-'a']++;
            right++;
        }
        vector<int>ans;
        while(right<=len){
            if(A==B){
                ans.push_back(left);
            }
            B[s[left]-'a']--;
            left++;
            if(right!=len)B[s[right]-'a']++;
            right++;
        }
        return ans;
    }
};