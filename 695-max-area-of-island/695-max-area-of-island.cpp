class Solution {
public:
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int m=g.size() ,n=g[0].size(),ans=INT_MIN;
        for(int i=0 ;i<m ;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]==1){
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    g[i][j]=0;
                    int sum=1;
                    while(!q.empty()){
                        auto cur=q.front();q.pop();
                        for(auto x:dir){
                            int r=x[0]+cur.first ,c=x[1]+cur.second;
                            if(r<0||c<0||c>=n||r>=m||g[r][c]!=1)continue;
                            g[r][c]=0;
                            q.push({r,c});
                            sum++;
                        }
                    }
                    cout<<sum<<"\n";
                    ans=max(ans,sum);
                }
            }
        }
        return ans==INT_MIN?0:ans;
    }
};