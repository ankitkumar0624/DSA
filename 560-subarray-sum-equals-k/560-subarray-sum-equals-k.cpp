class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int psum=0;
        unordered_map<int,int>mp;
        int cnts=0;
        for(int i=0;i<nums.size();i++){
            psum+=nums[i];
            if(psum==k)cnts++;
            if(mp.find(psum-k)!=mp.end())cnts+=mp[psum-k];
            mp[psum]++;
        }
        return cnts;
    }
};