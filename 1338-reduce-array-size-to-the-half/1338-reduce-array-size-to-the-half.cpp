class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto x:arr)mp[x]++;
        priority_queue<pair<int,int>>pq;
        for(auto x:mp)pq.push({x.second,x.first});
        int cnts=0 ,sum=0;
        while(!pq.empty()){
            auto x=pq.top().first;pq.pop();
            sum+=x;
            cnts++;
            if(sum>=n/2) break;
        }
        return cnts;
    }
};