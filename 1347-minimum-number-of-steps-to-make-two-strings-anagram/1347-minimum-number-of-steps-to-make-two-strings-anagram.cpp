class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto i:s)v1[i-'a']++;
        for(auto i:t)v2[i-'a']++;
        for(int i=0 ;i<26;i++){
            if(v1[i]!=0&&v2[i]!=0){
               if(v2[i]>v1[i]){
                   v1[i]=0;
               }else{
                    v1[i]=v1[i]-v2[i];
               }
            }
        }
        int sum=0;
        for(auto i:v1)sum+=i;
        return sum;
    }
};