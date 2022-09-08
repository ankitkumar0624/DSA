class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL) return NULL;
        if(root->left==NULL&&root->right==NULL&&root->val==0){
            return NULL;
        }
        root->left=pruneTree(root->left);
        root->right=pruneTree(root->right);
        if(root->left==NULL&&root->right==NULL&&root->val==0){
            return NULL;
        }
        return root;
    }
};