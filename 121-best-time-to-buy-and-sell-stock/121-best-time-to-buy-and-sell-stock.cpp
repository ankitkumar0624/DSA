class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>suffix(n);
        int val=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(prices[i]>=val)val=prices[i];
            suffix.push_back(val);
        }
        reverse(suffix.begin(),suffix.end());
        int profit=0;
        for(int i=0;i<n;i++){
            profit=max(profit,suffix[i]-prices[i]);
        }
        return profit;
    }
};