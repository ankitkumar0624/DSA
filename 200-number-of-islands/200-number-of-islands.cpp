class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
       int islands=0 ,m=grid.size() ,n=grid[0].size();
        int arr[]={0,1,0,-1,0};
        for(int r=0 ;r<m ;r++){
            for(int c=0 ;c<n ;c++){
                if(grid[r][c]=='1'){
                    islands++;
                    grid[r][c]='0';
                    queue<pair<int,int>>q;
                    q.push({r,c});
                    while(!q.empty()){
                        auto cur=q.front() ;q.pop();
                        int j=cur.first ,k=cur.second;
                        for(int i=0 ;i<4 ;i++){
                            int nr=j+arr[i] ,nc=k+arr[i+1];
                            if(nr<0 || nc<0 || nc==n || nr==m || grid[nr][nc]!='1') continue;
                            grid[nr][nc]='0';
                            q.push({nr,nc});
                        }
                    }
                }
            }
        }
        return islands;
    }
};