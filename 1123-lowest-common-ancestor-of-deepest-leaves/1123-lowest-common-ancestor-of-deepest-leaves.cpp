class Solution {
public:
    TreeNode*LCA;
    int deepest=0;
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int x=helper(root,0);
        return LCA;
    }
    int helper(TreeNode*root ,int depth){
        deepest=max(deepest,depth);
        if(root==NULL){
            return depth;
        }
        int left=helper(root->left,depth+1);
        int right=helper(root->right,depth+1);
        if(left==deepest&&right==deepest){
            LCA=root;
        }
        return max(left,right);
    }
};