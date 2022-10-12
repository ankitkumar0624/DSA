class Solution {
public:
    int maxDistance(vector<vector<int>>& grid){
        int n=grid.size() ,m=grid[0].size();
        if(m==0 || n==0 )return 0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0 ;j<n ;j++){
                if(grid[i][j]==1){
                    grid[i][j]=-1;
                    q.push({i,j});
                }
            }
        }
        if(q.size()==0 || q.size()==n*n) return -1;
        vector<pair<int,int>>v={{1,0},{0,1},{-1,0},{0,-1}};
        int maxlen=1;
        while(!q.empty()){
            pair<int,int>cur=q.front();q.pop();
            int x=cur.first ,y=cur.second;
            for(auto i:v){
                int nx=i.first+x ,ny=i.second+y;
                if(nx>=0&&nx<m&&ny>=0&&ny<n&&grid[nx][ny]==0){
                    if(grid[x][y]==-1){
                        grid[nx][ny]=1;
                    }else{
                        grid[nx][ny]=grid[x][y]+1;
                    }
                    q.push({nx,ny});
                    maxlen=max(maxlen,grid[nx][ny]);
                }
            }
        }
        return maxlen;
    }
};