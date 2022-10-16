class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        //TC==O(n*n);
        int row=matrix.size() ,col=matrix[0].size(),neg_cnt=0,mini=INT_MAX;
        long long int sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0)neg_cnt++;
                mini=min(mini,abs(matrix[i][j]));
            }
        }
        if(neg_cnt%2==0){
            return sum;
        }
        return sum-2*mini;
    }
};