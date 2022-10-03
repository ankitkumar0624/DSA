class Solution {
public:
    int edgeScore(vector<int>& e){
        int n=e.size();
        vector<long long int>score(n,0);
        for(int i=0;i<n;i++){
            score[e[i]]+=i;
        }
        int idx=0;
        long long int a=INT_MIN;
        for(int i=0;i<n;i++){
            if(score[i]>a){
                a=score[i];
                idx=i;
            }
        }
        return idx;
    }
};