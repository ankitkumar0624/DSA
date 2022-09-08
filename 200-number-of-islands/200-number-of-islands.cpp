class Solution {
public:
    int numIslands(vector<vector<char>>& g) {
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        int m=g.size() ,n=g[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]=='1'){
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    sum++;
                   while(!q.empty()){
                       auto cur=q.front();q.pop();
                        for(auto x:dir){
                            int r=x[0]+cur.first ,c=x[1]+cur.second;
                            if(r<0 || c<0 || r>=m || c>=n || g[r][c]!='1') continue;
                            g[r][c]='0';
                            q.push({r,c});
                        }
                   }
                }
            }
        }
        return sum;
    }
};