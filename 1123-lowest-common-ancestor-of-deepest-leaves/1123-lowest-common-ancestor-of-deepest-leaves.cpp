class Solution {
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(!root) return NULL;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>deep;
        while(!q.empty()){
            int n=q.size();
            deep.clear();
            for(int i=0;i<n;i++){
                TreeNode*cur=q.front();q.pop();
                deep.push_back(cur->val);
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
        }
        for(auto i:deep)cout<<i<<" ";
        int p=deep.front(),q1=deep.back();
        TreeNode*head=lca(root,p,q1);
        return head;
    }
    TreeNode*lca(TreeNode*root,int p,int q){
        if(!root) return NULL;
        if(root->val==p||root->val==q){
            return root;
        }
        TreeNode*l=lca(root->left,p,q);
        TreeNode*r=lca(root->right,p,q);
        if(l&&r){
            return root;
        }else if(l){
            return l;
        }
        return r;
    }
};