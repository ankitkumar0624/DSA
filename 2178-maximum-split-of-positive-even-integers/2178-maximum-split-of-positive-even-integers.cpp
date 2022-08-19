class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>arr;
        if(finalSum%2==1) return arr;
        long long csum=0;
        for(int i=2;i<finalSum;i+=2){
            csum+=i;
            if(csum<=finalSum){
                arr.push_back(i);
            }else{
                csum-=i;
                break;
            }
        }
        long long diff=finalSum-csum;
        long long l=0;
        if(arr.size()>0){
            l=arr.back();
            arr.pop_back();
        }
        l+=diff;
        arr.push_back(l);
        return arr;
    }
};