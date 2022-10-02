class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>v;
        for(auto i:nums)if(i%2==0)mp[i]++;
        for(auto i:mp){
            v.push_back({i.second,i.first});
        }
        if(v.size()==0)return -1;
        sort(v.begin(),v.end(),[](pair<int,int>& a, pair<int,int>& b){if(a.first==b.first){return a.second<b.second;}           return a.first>b.first;});
        return v[0].second;
    }
};