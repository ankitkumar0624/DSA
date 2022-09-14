class Solution {
public:
    int cnts=0;
    int pathSum(TreeNode* root, int k) {
        if(root){
            DFS(root,k);
            pathSum(root->left,k);
            pathSum(root->right,k);
        }
        return cnts;
    }
    void DFS(TreeNode*root,long long int k){
        if(!root) return ;
        if(k==root->val)cnts++;
        DFS(root->left,k-root->val);
        DFS(root->right,k-root->val);
        return ;
    }
};