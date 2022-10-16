class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int>t=arr;
        sort(t.begin(),t.end());
        long long int sum1=0,sum2=0;
        int ans=0;
        for(int i=0 ;i<arr.size();i++){
            sum1+=arr[i];
            sum2+=t[i];
            if(sum1==sum2)ans++;
        }
        return ans;
    }
};