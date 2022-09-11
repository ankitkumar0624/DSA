class Solution {
public:
    vector<vector<int>>dir{{1,1},{-1,-1},{-1,1},{1,-1},{0,1},{0,-1},{-1,0},{1,0}};
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        int n=g.size();
        if(g[0][0]!=0 || g[n-1][n-1]!=0) return -1;
        queue<pair<int,int>>q;
        q.push({0,0});
        g[0][0]=1;
        while(!q.empty()){
            auto cur=q.front(); q.pop();
            int r=cur.first,c=cur.second;
            if(r==n-1&&c==n-1) return g[r][c];
            for(auto i:dir){
                int x=i[0]+r,y=i[1]+c;
                if(x>=0&&y>=0&&x<n&&y<n&&g[x][y]==0){
                    g[x][y]=1+g[r][c];
                    q.push({x,y});
                }
            }
        }
        return -1;
    }
};