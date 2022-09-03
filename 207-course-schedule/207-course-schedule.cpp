class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& P) {
        //we solve this problem using kahn's algorithm;
        vector<int>graph[N];
        vector<int>inD(N,0);
        for(int i=0 ;i<P.size();i++){
            graph[P[i][1]].push_back(P[i][0]);
            inD[P[i][0]]++;
        }
        vector<int>vis(N,0);
        queue<int>q;
        for(int i=0;i<N;i++){
            if(inD[i]==0){
                q.push(i);
                vis[i]=1;
            }
        }
        while(!q.empty()){
            int cur=q.front();q.pop();
            for(auto j:graph[cur]){
                if(vis[j]==0&&--inD[j]==0){
                    q.push(j);
                    vis[j]=1;
                }
            }
        }
        for(int i=0;i<N;i++){
            if(vis[i]==0)return false;
        }
        return true;
    }
};