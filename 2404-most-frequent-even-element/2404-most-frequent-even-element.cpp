class Solution {
public:
    int mostFrequentEven(vector<int>& A) {
        map<int,int>mp;
        for(auto i:A){
            if(i%2==0){
                mp[i]++;
            }
        }
        int ele=-1,fre=0;
        for(auto i:mp){
            if(i.second>fre){
                ele=i.first;
                fre=i.second;
            }
        }
        return ele;
    }
};