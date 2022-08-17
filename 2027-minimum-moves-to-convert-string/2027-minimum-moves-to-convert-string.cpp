class Solution {
public:
    int minimumMoves(string s) {
        int cnts=0;
        int cnt_x=0;
        for(int i=0 ;i<s.size();i++){
            if(s[i]=='X'){
                cnt_x++;
                if(cnt_x==3){
                    cnts++;
                    cnt_x=0;
                }
            }else{
                if(cnt_x>=1&&cnt_x<3){
                    cnts++;
                    if(cnt_x==1){
                        i+=1;
                    }
                    cnt_x=0;
                }
            }
        }
        if(cnt_x!=0)cnts++;
        return cnts;
    }
};