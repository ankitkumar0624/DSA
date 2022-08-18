class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto x:ranks)mp[x]++;
        for(auto x:mp)pq.push({x.second,x.first});
        while(!pq.empty()){
            auto x=pq.top().first;pq.pop();
            if(x==3 || x==4){
                return "Three of a Kind";
            }else if(x==2){
                return "Pair";
            }
        }
        mp.clear();
        for(auto x:suits)mp[x]++;
        for(auto x:mp)if(x.second==5) return "Flush";
        return "High Card";
    }
};