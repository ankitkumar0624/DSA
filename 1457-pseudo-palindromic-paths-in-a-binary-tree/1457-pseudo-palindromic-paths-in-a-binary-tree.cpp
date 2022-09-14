class Solution {
public:
    int cnts=0;
    unordered_map<int,int>mp;
    int pseudoPalindromicPaths (TreeNode* root) {
        rec(root);
        return cnts;
    }
    void rec(TreeNode*root){
        if(!root) return;
        mp[root->val]++;
        if(!root->left&&!root->right){
            int odd=0;
            for(auto i:mp)if(i.second%2!=0)odd++;
            if(odd<=1)cnts++;
        }
        rec(root->left);
        rec(root->right);
        mp[root->val]--;
        if(mp[root->val]==0)mp.erase(root->val);
        return ;
    }
};