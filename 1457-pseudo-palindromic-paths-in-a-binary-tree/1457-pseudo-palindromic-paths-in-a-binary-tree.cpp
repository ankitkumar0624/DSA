class Solution {
public:
    unordered_map<int,int>mp;
    int count=0;
    int pseudoPalindromicPaths (TreeNode* root) {
        path(root);
        return count;
    }
    void path(TreeNode*root){
        if(root==NULL)return ;
        mp[root->val]++;
        path(root->left);
        path(root->right);
        if(!root->left&&!root->right){
            int a=0;
            for(auto i:mp)if(i.second%2!=0)a++;
            if(a<2)count++;
        }
        mp[root->val]--;
        if(mp[root->val]==0)mp.erase(root->val);
        return;
    }
};