class Solution {
public:
    int minSubArrayLen(int k, vector<int>& A) {
        long long int sum=0;
        int left=0 ,right=0,minLen=INT_MAX,n=A.size();
        while(right<n){
            sum+=A[right];
            right++;
            while(sum>=k){
                if(right-left<minLen)minLen=right-left;
                sum-=A[left];
                left++;
            }
        }
        return minLen==INT_MAX?0:minLen;
    }
};