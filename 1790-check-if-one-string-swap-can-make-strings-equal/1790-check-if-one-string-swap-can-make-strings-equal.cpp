class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        string p=s1,q=s2;
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        if(p!=q)return false;
        int cnt=0;
        for(int i=0 ;i<s1.size();i++){
            if(s1[i]!=s2[i])cnt++;
        }
        return cnt==2;
    }
};