class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int area=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    area=max(area,dfs(g,i,j));
                }
            }
        }
        return area;
    }
    int dfs(vector<vector<int>>& g,int x,int y){
        if(x>=0&&x<g.size()&&y>=0&&y<g[0].size()&&g[x][y]==1){
            g[x][y]=0;
            return 1+dfs(g,x+1,y)+dfs(g,x-1,y)+dfs(g,x,y+1)+dfs(g,x,y-1);
        }
        return 0;
    }
};