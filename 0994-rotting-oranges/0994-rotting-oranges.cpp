class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    //TC==O(M*N*4) + O(2*M*N);
    //SC==O(M*N) because of queue;
        int time=0;
        int m=grid.size(),n=grid[0].size();
        if(m==0 || n==0) return 0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        if(q.size()==0){
            for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)if(grid[i][j]==1)return -1;
            }
            return 0;
        }
        vector<pair<int,int>>v={{0,-1},{0,1},{1,0},{-1,0}};
        while(!q.empty()){
            int len=q.size();
            bool flag=false;
            for(int k=0 ;k<len;k++){
                pair<int,int>cur=q.front();q.pop();
                int x=cur.first,y=cur.second;
                for(auto i:v){
                    int nx=x+i.first,ny=y+i.second;
                    if(nx>=0&&nx<m&&ny>=0&&ny<n&&grid[nx][ny]==1){
                     q.push({nx,ny});
                        grid[nx][ny]=2;
                        flag=true;
                    }
                }
            }
            if(flag)time++;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)if(grid[i][j]==1)return -1;
        }
        return time;
    }
};