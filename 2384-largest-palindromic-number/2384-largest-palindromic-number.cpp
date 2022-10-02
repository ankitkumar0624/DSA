class Solution {
public:
    string largestPalindromic(string num) {
        int n=num.size();
        vector<int>v(10,0);
        for(auto i:num)v[i-'0']++;
        string s1="";
        string s2="";
        for(int i=9;i>=1;i--){
            while(v[i]>=2){
                s1+=(i+'0');
                s2+=(i+'0');
                v[i]-=2;
            }
        }
        if(!s1.empty()){
            while(v[0]>=2){
                s1+=0+'0';
                s2+=0+'0';
                v[0]-=2;
            }
        }
        for(int i=9;i>=0;i--){
            if(v[i]>0){
                s1+=i+'0';
                break;
            }
        }
        reverse(s2.begin(),s2.end());
        s1+=s2;
        return s1;
    }
};