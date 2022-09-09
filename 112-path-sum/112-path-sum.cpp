class Solution {
public:
    bool hasPathSum(TreeNode* root, int k) {
        if(root==NULL) return false;
        if(root->left==NULL&&root->right==NULL&&root->val==k) return true;
        return (hasPathSum(root->left,k-root->val) || hasPathSum(root->right,k-root->val));
    }
};