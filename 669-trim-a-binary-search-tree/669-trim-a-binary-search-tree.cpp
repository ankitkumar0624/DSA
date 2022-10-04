class Solution {
public:
    TreeNode* trimBST(TreeNode* r, int l, int h){
        if(r==NULL) return NULL;
        if(r->val>=l&&r->val<=h){
            r->left=trimBST(r->left,l,h);
            r->right=trimBST(r->right,l,h);
            return r;
        }
        if(r->val<l){
            return trimBST(r->right,l,h);
        }
        return trimBST(r->left,l,h);
    }
};