class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        long long int sum1=0 ,sum2=0;
        for(int i=0;i<s1.size();i++){
            sum1+=s1[i]-'a';
            sum2+=s2[i]-'a';
        }
        if(sum1!=sum2){
            if(sum1>sum2){
                for(int i=0 ;i<s1.size();i++){
                    if(s1[i]-'a'>=s2[i]-'a'){
                        
                    }else{
                        return false;
                    }
                }
            }
            if(sum2>sum1){
                for(int i=0 ;i<s1.size();i++){
                    if(s2[i]-'a'>=s1[i]-'a'){
                        
                    }else{
                        return false;
                    }
                }
            }
        }else{
            for(int i=0 ;i<s1.size();i++){
                if(s1[i]-'a'!=s2[i]-'a') return false;
            }
        }
        return true;
    }
};