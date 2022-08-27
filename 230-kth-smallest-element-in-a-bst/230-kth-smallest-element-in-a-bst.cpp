class Solution {
public:
    int ans=INT_MIN;
    int kthSmallest(TreeNode* root, int k) {
        int m=k;
        inorder(root,m);
        return ans;
    }
    int cnts=0;
    void inorder(TreeNode*root,int m){
        if(root==NULL) return;
           inorder(root->left,m);
           cnts++;
           if(cnts==m)ans=root->val;
           inorder(root->right ,m);
    }
};