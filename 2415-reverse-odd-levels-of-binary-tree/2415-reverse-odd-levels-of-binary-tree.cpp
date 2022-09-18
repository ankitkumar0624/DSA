class Solution {
public:
    int level=1;
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root->left&&!root->right) return root;
        TreeNode*l=root->left;
        TreeNode*r=root->right;
         if(level%2){
            int x=l->val;
            l->val=r->val;
            r->val=x;
        }
        rev(l,r);
        return root;
    }
    void rev(TreeNode*l,TreeNode*r){
            if(!l){
                return;
            }
        if(level!=1 && level%2){
            int x=l->val;
            l->val=r->val;
            r->val=x;
        }
        level++;
        rev(l->left,r->right);
        rev(l->right,r->left);
        level--;
        return;
    }
};