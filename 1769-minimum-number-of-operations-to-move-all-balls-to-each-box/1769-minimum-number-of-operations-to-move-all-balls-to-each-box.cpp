class Solution {
public:
    vector<int> minOperations(string s) {
        vector<int>ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(s[j]=='1')sum+=abs(j-i);
            }
            ans.push_back(sum);
        }
        return ans;
    }
};