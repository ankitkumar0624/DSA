class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto i:arr)mp[i]++;
        unordered_set<int>st;
        int cnts=0;
        for(auto i:mp){
            cnts++;
            st.insert(i.second);
        }
        return cnts==st.size();
    }
};