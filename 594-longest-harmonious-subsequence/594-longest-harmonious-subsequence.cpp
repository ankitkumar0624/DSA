class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums)mp[x]++;
        vector<int>res;
        for(auto x:mp)res.push_back(x.first);
        sort(res.begin(),res.end());
        int val=res[0],len=0;
        for(int i=1;i<res.size();i++){
            if(res[i]-val==1){
                len=max(len,mp[res[i]]+mp[val]);
            }
            val=res[i];
        }
        return len;
    }
};