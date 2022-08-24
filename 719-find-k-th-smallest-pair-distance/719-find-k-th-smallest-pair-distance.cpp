class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size() ,l=0 ,r=1000000;
        while(r>l){
        int cnts=0;
          int m=(l+r)/2;
            for(int i=0 ,j=0;i<n ;i++){
                while(j<n&&nums[j]<=nums[i]+m)j++;
                    cnts+=j-i-1;
            }
            if(cnts<k){
                l=m+1;
            }else{
                r=m;
            }
        }
        return l;
    }
};