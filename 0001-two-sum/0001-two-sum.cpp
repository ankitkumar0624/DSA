class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                return {mp[nums[i]],i};
            }else{
                mp[k-nums[i]]=i;
            }
        }
        return {};
    }
};