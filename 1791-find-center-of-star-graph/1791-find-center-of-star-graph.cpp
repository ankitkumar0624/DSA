class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        int n=e.size();
        vector<int>degree(n+2);
        for(int i=0;i<e.size();i++){
            degree[e[i][0]]++;
            degree[e[i][1]]++;
        }
        for(int i=1;i<n+2;i++){
            if(degree[i]==n)return i;
        }
        return 0;
    }
};