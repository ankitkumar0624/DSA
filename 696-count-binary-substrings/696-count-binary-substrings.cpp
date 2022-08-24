class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size() ,c1=0,c0=0;; 
        vector<int>cnts;
        for(int i=0;i<=n;i++){
           if(i!=n){
               if(s[i]=='1'){
                   if(c0!=0){
                    cnts.push_back(c0);
                    c0=0;
                    }
                   c1++;
               }else{
                  if(c1!=0){
                    cnts.push_back(c1);
                    c1=0;
                  }
                   c0++;
               }
           }else{
             if(c0!=0){
                cnts.push_back(c0);
            }else{
                cnts.push_back(c1);
              }
           } 
        }
        int sum=0;
        for(int i=0 ;i<cnts.size()-1;i++){
            sum+=min(cnts[i],cnts[i+1]);
        }
        return sum;
    }
};