
class Solution {
public:
    bool flag=false;
    int sum=0;
    bool hasPathSum(TreeNode* root, int k) {
        path(root,k);
        if(flag) return true;
        return false;
    }
     void path(TreeNode*root, int k){
        if(root==NULL) return ;
         sum+=root->val;
         path(root->left,k);
         path(root->right,k);
         if(!root->left&&!root->right){
             if(sum==k)flag=true;
         }
         sum-=root->val;
         return ;
    }
};