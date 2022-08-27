class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& I, vector<int>& newI) {
        I.push_back(newI);
        sort(I.begin(),I.end(),[](vector<int>&a,vector<int>&b){return a[0]<b[0];});
        vector<vector<int>>res;
        res.push_back(I[0]);
        for(int i=1 ;i<I.size();i++){
           vector<int>cur=I[i];
            if(res.back()[1]<cur[0]){
                res.push_back(cur);
            }else{
                res.back()[1]=max(res.back()[1],cur[1]);
            }
        }
        return res;
    }
};