class Solution {
public:
    int cnts=0;
    long long int sum=0;
    int pathSum(TreeNode* root, int k) {
        if(root){
            sum=0;
            DFS(root,k);
            pathSum(root->left,k);
            pathSum(root->right,k);
        }
        return cnts;
    }
    void DFS(TreeNode*root,long long int k){
        if(!root) return ;
        sum+=root->val;
        if(sum==k)cnts++;
        DFS(root->left,k);
        DFS(root->right,k);
        sum-=root->val;
        return ;
    }
};