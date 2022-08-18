class Solution {
public:
    vector<int>dir{0,1,0,-1,0};
    void solve(vector<vector<char>>& board) {
     int m=board.size() ,n=board[0].size();
        queue<pair<int,int>>q;
        for(int r=0 ;r<m ;r++){
           if(board[r][0]=='O'){
               q.push({r,0});
               board[r][0]='1';
           }
        }
        for(int r=0 ;r<m ;r++){
           if(board[r][n-1]=='O'){
               q.push({r,n-1});
               board[r][n-1]='1';
           }
        }
        for(int c=0 ;c<n ;c++){
           if(board[0][c]=='O'){
               q.push({0,c});
               board[0][c]='1';
           }
        }
        for(int c=0 ;c<n ;c++){
           if(board[m-1][c]=='O'){
               q.push({m-1,c});
               board[m-1][c]='1';
           }
        }
        while(!q.empty()){
            auto cur=q.front();q.pop();
            int r=cur.first ,c=cur.second;
            for(int i=0 ;i<4;i++){
                int nr=r+dir[i] ,nc=c+dir[i+1];
                if(nr<0 || nr==m || nc<0 || nc==n || board[nr][nc]!='O' )continue;
                board[nr][nc]='1';
                q.push({nr,nc});
            }
        }
        for(int r=0 ;r<m ;r++){
            for(int c=0 ;c<n ;c++){
                if(board[r][c]=='O')board[r][c]='X';
                if(board[r][c]=='1')board[r][c]='O';
            }
        }
    }
};