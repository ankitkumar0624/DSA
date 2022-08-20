class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalsum) {
        if(finalsum%2!=0) return {};
        long long int csum=0;
        vector<long long int>arr;
        for(int i=2;i<=finalsum;i+=2){
            csum+=i;
            if(csum<=finalsum){
                arr.push_back(i);
            }else{
                csum-=i;
                break;
            }
        }
        long long int x=arr.back();
        int diff=finalsum-csum;
        arr.pop_back();
        x+=diff;
        arr.push_back(x);
        return arr;
    }
};