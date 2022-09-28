class Solution {
public:
    int findCircleNum(vector<vector<int>>& C) {
        int n=C.size();
        vector<int>parent(n+1);
        for(int i=0;i<=n;i++)parent[i]=i;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(C[i][j]==1){
                    int x=find(parent,i+1);
                    int y=find(parent,j+1);
                    if(x==y){
                        continue;
                    }else{
                        parent[y]=x;
                    }
                }
            }
        }
        unordered_set<int>st;
        for(int i=1;i<=n;i++){
            int x=find(parent,parent[i]);
            st.insert(x);
        }
        int ans=st.size();
        return ans;
    }
    int find(vector<int>&parent,int i){
        if(i==parent[i]){
            return parent[i];
        }
        return parent[i]=find(parent,parent[i]);
    }
};