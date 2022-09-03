class Solution {
public:
    vector<int> findMinHeightTrees(int N, vector<vector<int>>& E) {
        if(E.size()<=0) return {N-1};
        vector<int>graph[N];
        vector<int>inD(N,0);
        for(int i=0;i<E.size();i++){
            graph[E[i][0]].push_back(E[i][1]);
            graph[E[i][1]].push_back(E[i][0]);
            inD[E[i][0]]++;
            inD[E[i][1]]++;
        }
        vector<int>vis(N,0);
        queue<int>q;
        for(int i=0;i<N;i++){
            if(inD[i]==1){
                vis[i]=1;
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
          int n=q.size();
            ans.clear();
            for(int j=0;j<n;j++){
                int cur=q.front();q.pop();
                 ans.push_back(cur);
                for(auto i:graph[cur]){
                    if(vis[i]==0&&--inD[i]==1){
                        vis[i]=1;
                        q.push(i);
                    }
                }
            }
        }
        return ans;
    }
};