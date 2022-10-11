class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid){
        int row=grid.size(), col=grid[0].size();
        if(row==0 || col ==0) return -1;
        if(grid[0][0]!=0 || grid[row-1][col-1]!=0) return -1;
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        vector<pair<int,int>>v={{1,1},{-1,-1},{-1,1},{1,-1},{0,-1},{0,1},{1,0},{-1,0}};
        while(!q.empty()){
            pair<int,int>cur=q.front();q.pop();
            int x=cur.first ,y=cur.second;
            if(x==row-1&&y==col-1) return grid[x][y];
            
            for(auto i:v){
                int nx=x+i.first;
                int ny =y+i.second;
                if(nx>=0&&nx<row&&ny>=0&&ny<col&&grid[nx][ny]==0){
                    q.push({nx,ny});
                    grid[nx][ny]=grid[x][y]+1;
                }
            }
        }
        return -1;
    }
};
//TC===O(m*n)*8
//SC==O(m*n)