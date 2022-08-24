class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int left=0 ,len=nums.size();
        vector<int>ans;
        deque<int>dq;
        while(left<len){
            if(dq.front()==left-k)dq.pop_front();
            while(!dq.empty()&&nums[dq.back()]<nums[left])dq.pop_back();
            dq.push_back(left);
            if(left-k+1>=0)ans.push_back(nums[dq.front()]);
            left++;
        }
        return ans;
    }
};