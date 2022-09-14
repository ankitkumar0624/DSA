class Solution {
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>res;
        unordered_map<string,int>mp;
        DFS(root,res,mp);
        return res;
    }
    string DFS(TreeNode*root,vector<TreeNode*>&res,unordered_map<string,int>&mp){
        if(!root) return "#";
        string s=to_string(root->val)+","+DFS(root->left,res,mp)+","+DFS(root->right,res,mp);
        mp[s]++;
        if(mp[s]==2)res.push_back(root);
        return s;
    }
};