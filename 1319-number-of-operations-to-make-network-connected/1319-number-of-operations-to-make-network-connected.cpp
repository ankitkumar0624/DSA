class Solution {
public:
    int makeConnected(int N, vector<vector<int>>&C) {
        if(C.size()<N-1) return -1;
        vector<int>parent(N);
        for(int i=0;i<N;i++)parent[i]=i;
        int connection=0;
        for(auto i:C){
            int x=find(parent,i[0]);
            int y=find(parent,i[1]);
            if(x==y){
                continue;
            }else{
                parent[y]=x;
                connection++;
            }
        }
        return N-1-connection;
    }
    int find(vector<int>&parent,int i){
        if(i==parent[i]){
            return parent[i];
        }
        return parent[i]=find(parent,parent[i]);
    }
};