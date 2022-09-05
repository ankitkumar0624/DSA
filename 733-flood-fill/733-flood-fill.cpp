class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& I, int sr, int sc, int C) {
        int val=I[sr][sc];
        dfs(I,sr,sc,C,val);
        return I;
    }
    void dfs(vector<vector<int>>& I,int sr, int sc, int C,int val){
        
         if(sr<0||sc<0||sr>=I.size()||sc>=I[0].size()||I[sr][sc]==C||I[sr][sc]!=val){
            return ;
        }
        I[sr][sc]=C;
        dfs(I,sr+1,sc,C,val);
        dfs(I,sr,sc+1,C,val);
        dfs(I,sr-1,sc,C,val);
        dfs(I,sr,sc-1,C,val);
        return ;
    }        
};