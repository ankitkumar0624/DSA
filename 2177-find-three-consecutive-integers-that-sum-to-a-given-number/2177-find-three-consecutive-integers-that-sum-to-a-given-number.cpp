class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long int n=num;
        if(n%3!=0) return {};
        return {n/3-1,n/3,n/3+1};
    }
};