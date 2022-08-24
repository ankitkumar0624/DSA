class Solution {
public:
    unordered_map<int,int>left,right;
    TreeNode* createBinaryTree(vector<vector<int>>& des) {
        unordered_set<int>c;
        int value=-1;
        for(auto x:des)c.insert(x[1]);
        for(auto x:des)if(c.find(x[0])==c.end()) value=x[0];
        for(auto x:des){
            if(x[2]==1){
                left[x[0]]=x[1];
            }else{
                right[x[0]]=x[1];
            }
        }
        TreeNode*root=new TreeNode(value);
        fun(root);
        return root;
    }
    void fun(TreeNode*root){
        if(root==NULL) return;
        int x=root->val;
        if(left.find(x)!=left.end())root->left=new TreeNode(left[x]);
        if(right.find(x)!=right.end())root->right=new TreeNode(right[x]);
        if(root->left==NULL&&root->right==NULL) return;
        fun(root->left);
        fun(root->right);
        return ;
    }
};