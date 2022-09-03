class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& P) {
        vector<int>graph[N];
        vector<int>inD(N,0);
        for(int i=0;i<P.size();i++){
            graph[P[i][1]].push_back(P[i][0]);
            inD[P[i][0]]++;
        }
        queue<int>q;
        vector<int>vis(N,0);
        for(int i=0 ;i<N;i++){
            if(inD[i]==0){
                q.push(i);
                vis[i]=1;
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int cur=q.front();q.pop();
            ans.push_back(cur);
            for(auto i:graph[cur]){
                if(vis[i]==0&&--inD[i]==0){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        for(int i=0;i<N;i++){
            if(vis[i]==0) return {};
        }
        return ans;
    }
};