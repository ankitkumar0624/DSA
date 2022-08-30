class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        vector<pair<int,int>>res;
        for(auto i:nums)res.push_back({i,mp[i]});
        sort(res.begin(),res.end(),[](pair<int,int>&p1,pair<int,int>&p2){if(p1.second==p2.second)                       return p1.first>p2.first; return p1.second<p2.second;});
        vector<int>ans;
        for(auto i:res)ans.push_back(i.first);
        return ans;
    }
};