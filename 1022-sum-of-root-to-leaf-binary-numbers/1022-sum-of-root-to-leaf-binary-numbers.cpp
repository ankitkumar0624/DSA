class Solution {
public:
    vector<string>v;
    int sumRootToLeaf(TreeNode* root){
        string s="";
        path(root,s);
        int ans=0;
        for(auto i:v){
            int res=0 ,p=0;
            while(i.size()>0){
                int j=i.back()-'0';
                res+=(pow(2,p)*j);
                p+=1;
                i.pop_back();
            }
            ans+=res;
        }
        return ans;
    }
    void path(TreeNode*root, string &s){
        if(root==NULL) return;
        s+=root->val+'0';
        path(root->left,s);
        path(root->right,s);
        if(!root->left&&!root->right) v.push_back(s);
        s.pop_back();
        return ;
    }
};