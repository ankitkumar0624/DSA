class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(mp.find(nums[i])!=mp.end()){
                    if(i-mp[nums[i]]-1<k)return false;
                    mp[nums[i]]=i;
                }else{
                    mp[nums[i]]=i;
                }
            }
        }
        return true;
    }
};