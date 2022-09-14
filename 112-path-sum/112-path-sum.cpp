class Solution {
public:
    int sum=0;
    bool hasPathSum(TreeNode* root, int k) {
        if(!root)return false;
        sum+=root->val;
        if(!root->left&&!root->right&&sum==k) return true;
        if( hasPathSum(root->left,k) ||  hasPathSum(root->right,k)){
            return true;
        }
        sum-=root->val;
        return false;
    }
};