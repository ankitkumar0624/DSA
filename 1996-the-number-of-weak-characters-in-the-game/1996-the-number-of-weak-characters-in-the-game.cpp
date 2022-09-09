class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& P) {
        sort(P.begin(),P.end(),[](vector<int>&v1,vector<int>&v2){if(v1[0]==v2[0]){return                            v1[1]>v2[1];}return v1[0]<v2[0];});
       int val=INT_MIN,ans=0;
        for(int i=P.size()-1;i>=0;i--){
            if(val>P[i][1]){
                ans++;
            }
            val=max(val,P[i][1]);
        }
        return ans;
    }
};