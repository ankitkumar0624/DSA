class Solution {
public:
    vector<vector<int>>ans;
    vector<int>tmp;
    int sum=0;
    vector<vector<int>> pathSum(TreeNode* root, int k) {
        fill(root,k);
        return ans;
    }
    void fill(TreeNode*root,int k){
        if(!root) return;
        sum+=root->val;
        tmp.push_back(root->val);
        if(!root->left&&!root->right&&sum==k){
            ans.push_back(tmp);
        }
        fill(root->left,k);
        fill(root->right,k);
        tmp.pop_back();
        sum-=root->val;
        return ;
    }
};