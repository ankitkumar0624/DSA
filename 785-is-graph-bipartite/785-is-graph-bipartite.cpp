class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>col(n,-1);
        for(int i=0;i<n;i++){
            if(col[i]==-1){
                queue<int>q;
                col[i]=0;
                q.push(i);
                while(!q.empty()){
                    int cur=q.front();q.pop();
                    for(auto i:graph[cur]){
                        if(col[i]==-1){
                            col[i]=col[cur]==0?1:0;
                            q.push(i);
                        }else{
                            if(col[i]==col[cur])return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};