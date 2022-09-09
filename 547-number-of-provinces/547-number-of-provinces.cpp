class Solution {
public:
    vector<vector<int>>graph;
    int findCircleNum(vector<vector<int>>& A) {
        int n=A.size();
        graph.clear();
        graph.resize(n+1);
        for(int i=0 ;i<n ;i++){
            for(int j=0 ;j<n ;j++){
                if(A[i][j]==1)graph[i+1].push_back(j+1);
            }
        }
        vector<bool>vis(n+1,false);
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==false){
                dfs(vis,i);
                cnt++;
            }
        }
        return cnt;
    }
    void dfs(vector<bool>&vis,int s){
        vis[s]=true;
        for(auto i:graph[s]){
            if(vis[i]==false){
                dfs(vis,i);
            }
        }
        return ;
    }
};