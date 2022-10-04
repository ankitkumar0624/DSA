class Solution {
public:
    string s="";
    string s1="";
    string smallestFromLeaf(TreeNode* root){
        path(root);
        return s;
    }
    void path(TreeNode*root){
        if(root==NULL) return;
        s1+=('a'+root->val);
        path(root->left);
        path(root->right);
        if(!root->left&&!root->right){
            if(s==""){
                s=s1;
                reverse(s.begin(),s.end());
            }
            else{
                string t=s1;
                reverse(t.begin(),t.end());
                if(t<s)s=t;
            }
        }
        s1.pop_back();
        return ;
    }
};