class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& c) {
        vector<pair<int,int>>diff;
        int n=c.size();
        for(int i=0;i<n;i++)diff.push_back({abs(c[i][0]-c[i][1]),i});
        sort(diff.begin(),diff.end(),[](pair<int,int>&p1,pair<int,int>&p2){return p1.first>p2.first;});
        int sum=0,a=0,b=0;
        for(int i=0;i<n;i++){
            int j=diff[i].second;
            if(a<n/2&&b<n/2){
                if(c[j][0]>=c[j][1]){
                    b++;
                    sum+=c[j][1];
                }else{
                    a++;
                    sum+=c[j][0];
                }
            }else if(a==n/2){
                sum+=c[j][1];
            }else{
                sum+=c[j][0];
            }
        }
        return sum;
    }
};