class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>arr;
        int l=0,len=nums.size();
        while(l<len){
            if(dq.front()==l-k)dq.pop_front();
            while(!dq.empty()&&nums[dq.back()]<nums[l])dq.pop_back();
            dq.push_back(l);
            if(l-k+1>=0)arr.push_back(nums[dq.front()]);
            l++;
        }
        return arr;
    }
};