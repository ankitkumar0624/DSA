class Solution {
public:
    int goodNodes(TreeNode* root) {
        int prev=INT_MIN;
        return fun(root,prev);
    }
    int fun(TreeNode*root, int prev){
        if(root==NULL) return 0;
        if(root->val>=prev){
            return 1+fun(root->left,root->val)+fun(root->right,root->val);
        }
        return fun(root->left,prev)+fun(root->right,prev);
    }
};