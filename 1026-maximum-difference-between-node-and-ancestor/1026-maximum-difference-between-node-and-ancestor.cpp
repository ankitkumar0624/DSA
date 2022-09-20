class Solution {
public:
    int ans=INT_MIN;
    vector<int>tmp;
    int maxAncestorDiff(TreeNode* root) {
        path(root);
        return ans;
    }
    void path(TreeNode*root){
        if(!root)return;
        tmp.push_back(root->val);
        path(root->left);
        path(root->right);
        if(!root->left&&!root->right){
            vector<int>tmp1;
            tmp1.assign(tmp.begin(),tmp.end());
            sort(tmp1.begin(),tmp1.end());
            for(auto i:tmp1)cout<<i<<" ";
            cout<<"\n";
            int diff=tmp1.back()-tmp1.front();
            ans=max(diff,ans);
        }
        tmp.pop_back();
        return ;
    }
};