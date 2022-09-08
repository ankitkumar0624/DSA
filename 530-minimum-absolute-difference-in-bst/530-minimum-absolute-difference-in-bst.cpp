class Solution {
public:
    vector<int>ans;
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int res=INT_MAX;
        for(int i=0;i<=ans.size()-2;i++){
            res=min(ans[i+1]-ans[i],res);
        }
        return res;
    }
    void inorder(TreeNode*root){
        if(root==NULL) return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
        return ;
    }
};