class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>r1,r2;
        DFS(root1,r1);
        DFS(root2,r2);
        return r1==r2;
    }
    void DFS(TreeNode*root,vector<int>&arr){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL)arr.push_back(root->val);
        DFS(root->left,arr);
        DFS(root->right,arr);
        return ;
    }
};