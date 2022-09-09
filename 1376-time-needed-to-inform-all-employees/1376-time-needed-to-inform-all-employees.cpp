class Solution {
public:
    vector<vector<int>>graph;
    vector<int>t;
    int numOfMinutes(int n, int s, vector<int>& M, vector<int>& IT ) {
        graph.clear();
        graph.resize(n);
        t=IT;
        for(int i=0;i<M.size();i++){
            if(M[i]!=-1)graph[M[i]].push_back(i);
        }
        return dfs(s);
    }
    int dfs(int m){
        int res=0;
        for(int i:graph[m]){
            res=max(res,dfs(i));
        }
        return res+t[m];
    }
};