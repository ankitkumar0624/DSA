class Solution {
public:
    int lengthOfLongestSubstring(string s){
        //SC===O(N);
        //TC==
       vector<int>v(256,0);
        int l=0 ,n=s.size(),r=0,res=0,len=n;
        string str="";
        while(r<len){
            if(v[s[r]]==0){
                str+=s[r];
                // cout<<r<<" "<<l<<endl;
                res=max(res,r-l+1);
                v[s[r]]=-1;
            }else{
                while(v[s[r]]!=0){
                    v[str[l]]++;
                    l++;
                }
                str+=s[r];
                // cout<<r<<" "<<l<<endl;
                // res=max(res,r-l+1);
                v[s[r]]=-1;
            }
            r++;
        }
        return res;
    }
};