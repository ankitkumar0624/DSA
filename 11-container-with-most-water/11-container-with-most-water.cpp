class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),l=0,r=n-1;
        int ans=0;
        while(r>l){
            if(height[l]==height[r]){
                ans=max(ans,height[l]*(r-l));
                l++;
                r--;
            }else if(height[l]>height[r]){
                ans=max(ans,height[r]*(r-l));
                r--;
            }else{
                ans=max(ans,height[l]*(r-l));
                l++;
            }
        }
        return ans;
    }
};