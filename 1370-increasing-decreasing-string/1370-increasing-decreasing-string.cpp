class Solution {
public:
    string sortString(string s) {
        vector<int>v(26,0);
        vector<int>v1(26,0);
        string s1="";
        for(auto i:s)v[i-'a']++;
        while(v1!=v){
            for(int i=0;i<26;i++){
                if(v[i]!=0){
                    s1+='a'+i;
                    v[i]--;
                }
            }
             for(int i=25;i>=0;i--){
               if(v[i]!=0){
                    s1+='a'+i;
                    v[i]--;
                }
            }
        }
        return s1;
    }
};