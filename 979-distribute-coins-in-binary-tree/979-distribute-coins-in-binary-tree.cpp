class Solution {
public:
    int moves=0;
    int distributeCoins(TreeNode* root) {
        if(root->left){
            distributeCoins(root->left);
            root->val+=root->left->val-1;
            moves+=abs(root->left->val-1);
        }
         if(root->right){
            distributeCoins(root->right);
            root->val+=root->right->val-1;
            moves+=abs(root->right->val-1);
        }
        return moves;
    }
};