class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root==NULL) return NULL;
        if(root->left==NULL&&root->right==NULL){
            if(root->val==target){
                return NULL;
            }
        }
        root->left=removeLeafNodes(root->left,target);
        root->right=removeLeafNodes(root->right,target);
        if(root->left==NULL&&root->right==NULL){
            if(root->val==target){
                return NULL;
            }
        }
        return root;
    }
};