class Solution {
public:
    vector<int>dir={0,1,0,-1,0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size() ,n=mat[0].size();
        queue<pair<int,int>>q;
        for(int r=0 ;r<m ;r++){
            for(int c=0;c<n;c++){
                if(mat[r][c]==0){
                    q.push({r,c});
                }else{
                    mat[r][c]=-1;
                }
            }
        }
        while(!q.empty()){
            auto cur=q.front();q.pop();
            for(int i=0 ;i<4;i++){
                int nr=cur.first+dir[i] ,nc=cur.second+dir[i+1];
                if(nr==m || nr<0 ||nc==n || nc<0 || mat[nr][nc]!=-1) continue;
                mat[nr][nc]=mat[cur.first][cur.second]+1;
                q.push({nr,nc});
            }
        }
        return mat;
    }
};