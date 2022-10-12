class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        //TC==O(M)+O(M*N);
        int row=grid.size() ,col=grid[0].size();
        for(int i=0;i<row;i++){
            if(grid[i][0]==0){
                for(int j=0;j<col;j++){
                    if(grid[i][j]==0)grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        for(int j=0;j<col;j++){
            int c0=0 ,c1=0;
            for(int i=0;i<row;i++){
                if(grid[i][j]==0)c0++;
                else c1++;
            }
            if(c0>c1){
                for(int i=0;i<row;i++){
                if(grid[i][j]==0)grid[i][j]=1;
                else grid[i][j]=0;
                }
            }
        }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
        int total=0;
        for(int i=0;i<row;i++){
            int p=0;
            for(int j=col-1;j>=0;j--){
                total+=pow(2,p++)*grid[i][j];
            }
        }
        return total;
    }
};