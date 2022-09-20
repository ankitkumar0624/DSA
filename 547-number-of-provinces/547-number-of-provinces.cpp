class Solution {
public:
    int findpar(int node,vector<int>&par){
        if(node==par[node]) return node;
        return par[node]=findpar(par[node],par);
    }
    void Union(int a, int b,vector<int>&par){
        a=findpar(a,par);
        b=findpar(b,par);
        if(a!=b){
            par[a]=b;
        }
        return ;
    }
    int findCircleNum(vector<vector<int>>& C){
        int n=C.size();
        vector<int>par(n);
        for(int i=0 ;i<n;i++)par[i]=i;
        
        for(int i=0 ;i<n ;i++){
            for(int j=i+1 ;j<n ;j++){
                if(C[i][j]==1){
                    Union(i,j,par);
                }
            }
        }
        for(auto i:par)cout<<i<<" ";
        int cnts=0;
        for(int i=0 ;i<n ;i++){
            if(i==par[i])cnts++;
        }
        return cnts;
    }
};