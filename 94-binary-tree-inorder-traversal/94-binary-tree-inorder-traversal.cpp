class Solution {
public:
    vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        inod(root);
        return ans;
    }
    void inod(TreeNode*root){
        if(root==NULL) return;
        inod(root->left);
        ans.push_back(root->val);
        inod(root->right);
        return ;
    }
};