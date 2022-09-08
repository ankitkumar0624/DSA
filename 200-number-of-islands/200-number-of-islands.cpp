class Solution {
public:
    int numIslands(vector<vector<char>>& g) {
        int cnt=0;
        for(int i=0 ;i<g.size();i++){
            for(int j=0 ;j<g[0].size();j++){
                if(g[i][j]=='1'){
                    cnt++;
                    dfs(g,i,j);
                }
            }
        }
        return cnt;
    }
    void dfs(vector<vector<char>>& g ,int x,int y){
        if(x>=0&&x<g.size()&&y>=0&&y<g[0].size()&&g[x][y]=='1'){
            g[x][y]='0';
        }else{
            return;
        }
        dfs(g,x+1,y);
        dfs(g,x-1,y);
        dfs(g,x,y+1);
        dfs(g,x,y-1);
        return ;
    }
};