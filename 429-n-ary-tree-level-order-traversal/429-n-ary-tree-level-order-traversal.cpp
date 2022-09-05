class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            ans.emplace_back();
            int n=q.size();
            for(int i=n;i>=1;i--){
                Node*cur=q.front();q.pop();
                ans.back().push_back(cur->val);
                for(Node*child:cur->children){
                    q.push(child);
                }
            }
        }
        return ans;
    }
};