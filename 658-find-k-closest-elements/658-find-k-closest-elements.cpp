class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x){
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            v.push_back({abs(x-arr[i]),arr[i]});
        }
        sort(v.begin(),v.end(),[](pair<int,int>&a,pair<int,int>&b){if(a.first==b.first){return            a.second<b.second;} return a.first<b.first;});
        vector<int>ans;
        while(v.size()>k){
            v.pop_back();
        }
        for(auto i:v)ans.push_back(i.second);
        sort(ans.begin(),ans.end());
        return ans;
    }
};