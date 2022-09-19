class Solution {
public:
    vector<int>par;
    vector<int>rank;
    int findpar(int node){
        if(node==par[node]){
            return node;
        }
        return par[node]=findpar(par[node]);
    }
    bool Union(int&u,int&v){
        int i=findpar(u);
        int j=findpar(v);
        if(rank[i]>rank[j]){
            par[j]=i;
        }else if(rank[j]>rank[i]){
            par[i]=j;
        }else{
            if(i==j) return true;
            else{
                par[j]=i;
                rank[i]++;
            }
        }
        return false;
    }
    vector<int>findRedundantConnection(vector<vector<int>>& e){
        int n=e.size();    
        par.clear();
        rank.clear();
        par.resize(n+1);
        rank.resize(n+1);
        for(int i=1;i<=n;i++)rank[i]=0;
        for(int i=1;i<=n;i++)par[i]=i;
        for(int i=0 ;i<n ;i++){
           if( Union(e[i][0],e[i][1])) return {e[i][0],e[i][1]};
        }
        return {};
    }
};