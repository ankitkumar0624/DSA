class Solution {
public:
    vector<int>res;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        sort(res.begin(),res.end());
        return res;
    }
    void inorder(TreeNode*root){
        if(root==NULL) return ;
        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);
    }
};