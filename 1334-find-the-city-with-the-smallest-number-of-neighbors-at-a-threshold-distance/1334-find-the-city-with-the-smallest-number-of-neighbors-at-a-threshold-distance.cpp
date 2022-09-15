class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& E, int D) {
        vector<pair<int,int>>graph[n];
        for(auto i:E){
            graph[i[0]].push_back({i[1],i[2]});
            graph[i[1]].push_back({i[0],i[2]});
        }
        int result=1e9,ans=-1;
        for(int i=0 ;i<n;i++){
            int found=dijkstra(graph,n,i,D);
            if(result>=found){
                result=found;
                ans=i;
            }
        }
        return ans;
    }
    int dijkstra(vector<pair<int,int>>graph[],int n,int i,int D){
            vector<int>dis(n,INT_MAX);
            dis[i]=0;
            priority_queue<pair<int,int>>pq;
            pq.push({0,i});
            while(!pq.empty()){
                auto p=pq.top();pq.pop();
                for(auto i:graph[p.second]){
                    if(dis[i.first]>i.second+dis[p.second]){
                        dis[i.first]=i.second+dis[p.second];
                        pq.push({dis[i.first],i.first});
                    }
                }
            }
            int cnts=0;
            for(int i=0;i<n;i++){
                if(dis[i]!=0){
                    if(dis[i]<=D)cnts++;
                }
            }
            return cnts;
        }
};