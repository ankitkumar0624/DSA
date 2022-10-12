class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat){
        int m=mat.size() ,n=mat[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0)q.push({i,j});
                else{
                    mat[i][j]=-1;
                }
            }
        }
        vector<pair<int,int>>v={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            pair<int,int>cur=q.front();q.pop();
            int x=cur.first ,y=cur.second;
            for(auto i:v){
                int nx=x+i.first ,ny=y+i.second;
                if(nx>=0&&nx<m&&ny>=0&&ny<n&&mat[nx][ny]==-1){
                    q.push({nx,ny});
                    mat[nx][ny]=1+mat[x][y];
                }
            }
        }
        return mat;
    }
};