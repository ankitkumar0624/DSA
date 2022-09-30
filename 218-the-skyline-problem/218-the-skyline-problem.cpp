class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        // [left, right, height]   
        // [1, 10, 10], [3, 7, 15], [5, 12, 12]
        //           ____________
        //          |            |
        //          |      ______|_____________       
        //      ____|_____|______|________     |
        //     |    |     |      |        |    |
        //     |    |     |      |        |    |
        // ____|____|_____|______|________|____|___   
        //     1    3     5      7        10   12
        
        // key point marked everytime the maximum height changes
        // -> use priority queue
        
        // break buildings to left and right edges seperately
        // use multiset (not set) to sort them by location
        // Pay Attention: consider the case [2,3,3],[3,5,3]
        //            ___ ______
        //           |   |      |
        //     ______|___|______|___________
        //           2   3      5
        // we don't want to mark a point at location 3
        // thus, we need to pay attention to the sorted order
        // if two edges have the same location, we let left edges come first
        auto cmp = [](pair<int, int> a, pair<int, int> b)
        {
            if(a.first == b.first)
                return a.second > b.second;
            else
                return a.first < b.first;
        };
        
        multiset<pair<int, int>, decltype(cmp)> edges(cmp);
        for(auto & ele : buildings)
        {
            edges.insert(make_pair(ele[0], ele[2]));
            // use negative number to represent it's a right edge
            edges.insert(make_pair(ele[1], -ele[2]));
        }
        
        // idea: left edge -> enqueue, right edge -> dequeue
        // but we can't dequeue a value from priority queue directly
        // even can't iterate on the priority queue
        // so we use a hashmap to store values that pending to dequeue
        priority_queue<int> pq;
        unordered_map<int, int> pending_delete;
        vector<vector<int>> ans;
        
        for(auto &e : edges)
        {
            int before = 0;
            if(!pq.empty())
                before = pq.top();
            
            if(e.second > 0)
                pq.push(e.second);
            else
            {
                pending_delete[-e.second]++;
             
                // always keep the top of pq is valid (discard pending ones)
                while(!pq.empty() && pending_delete[pq.top()])
                {
                    pending_delete[pq.top()]--;
                    pq.pop();
                }
            }
            
            int after = 0;
            if(!pq.empty())
                after = pq.top();
            
            // mark a point everytime the maximum height changes
            if(before != after)
                ans.push_back({e.first, after});
        }
        
        return ans;
    }
    /*********complexity: time - O(nlogn), space - O(n)**********/
};