class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto x:nums)mp[x]++;
        for(auto it:mp){
            if(mp[it.first]>0){
                for(int i=k-1;i>=0;i--){
                    mp[it.first+i]=mp[it.first+i]-mp[it.first];
                    if(mp[it.first+i]<0) return false;
                }
            }
        }
        return true;
    }
};