class Solution {
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        vector<int>D;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            D.clear();
            for(int i=0;i<n;i++){
                TreeNode*cur=q.front();q.pop();
                D.push_back(cur->val);
                if(cur->left!=NULL)q.push(cur->left);
                if(cur->right!=NULL)q.push(cur->right);
            }
        }
        int p1=D.front() ,p2=D.back();
        TreeNode*head=LCA(root,p1,p2);
        return head;
    }
    TreeNode*LCA(TreeNode*root ,int p1 ,int p2){
        if(root==NULL) return NULL;
        if(root->val==p1 || root->val==p2){
            return root;
        }
        TreeNode*l=LCA(root->left,p1,p2);
        TreeNode*r=LCA(root->right,p1,p2);
        if(l!=NULL&&r!=NULL){
            return root;
        }else if(l!=NULL){
            return l;
        }
        return r;
    }
};