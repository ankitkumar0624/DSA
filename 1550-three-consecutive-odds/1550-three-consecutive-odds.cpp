class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        int ans=0;
        for(auto i:arr){
            if(i%2!=0){
                count++;
                ans=max(ans,count);
            }else{
                count=0;
            }
        }
        return ans>=3;
    }
};