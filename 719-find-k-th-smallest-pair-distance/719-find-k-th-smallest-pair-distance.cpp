class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=1000000;
        while(r>l){
            int cnts=0;
            int mid=(r+l)/2;
            for(int i=0,j=0;i<n;i++){
                while(j<n&&nums[j]<=mid+nums[i])j++;
                cnts+=j-i-1;
            }
            if(cnts<k){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return l;
    }
};