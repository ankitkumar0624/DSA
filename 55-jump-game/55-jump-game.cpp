class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump=0;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            jump++;
            if(nums[i]>=jump)jump=0;
        }
        return jump==0;
    }
};