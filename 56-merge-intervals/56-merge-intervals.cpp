class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& its) {
        vector<vector<int>>res;
        if(its.size()==0)return res;
        sort(its.begin(),its.end(),[](vector<int>&a,vector<int>&b){return a[0]<b[0];});
        res.push_back(its[0]);
        for(int i=1 ;i<its.size();i++){
            vector<int>cur=its[i];
            if(res.back()[1]<cur[0]){
                res.push_back(its[i]);
            }else{
                res.back()[1]=max(res.back()[1],its[i][1]);
            }
        }
        return res;
    }
};