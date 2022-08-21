class Solution {
public:
    unordered_map<int,vector<int>>v;
    void creategraph(TreeNode*root){
        queue<pair<TreeNode*,int>>q;
        q.push({root,-1});
        while(q.size()){
            auto[node,parent]=q.front();q.pop();
            if(parent!=-1){
                v[parent].push_back(node->val);
                v[node->val].push_back(parent);
            }
            if(node->left)q.push({node->left,node->val});
            if(node->right)q.push({node->right,node->val});
        }
    }
    int amountOfTime(TreeNode* root, int start) {
        creategraph(root);
        queue<int>q;
        unordered_map<int,bool>seen;
        q.push(start);
        seen[start]=true;
        int time=-1;
        while(!q.empty()){
            time++;
            int n=q.size();
            while(n--){
            int x=q.front();q.pop();
                for(auto i:v[x]){
                    if(seen[i]==false){
                        q.push(i);
                        seen[i]=true;
                    }
                }
            }
        }
        return time;
    }
};