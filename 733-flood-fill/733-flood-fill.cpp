class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& I, int sr, int sc, int C) {
        int r=I.size(),c=I[0].size(),val=I[sr][sc];
        queue<pair<int,int>>q;
        int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
        if(val==C) return I;
        I[sr][sc]=C;
        q.push({sr,sc});
        while(!q.empty()){
            int x=q.front().first,y=q.front().second; q.pop();
            for(auto i:dir){
                int x1=x+i[0] ,y1=y+i[1];
                if(x1<0 || y1<0 || x1>=r || y1>=c) continue;
                if(I[x1][y1]!=val) continue;
                if(I[x1][y1]==C) continue;
                I[x1][y1]=C;
                q.push({x1,y1});
            }
        }
        return I;
    }
};