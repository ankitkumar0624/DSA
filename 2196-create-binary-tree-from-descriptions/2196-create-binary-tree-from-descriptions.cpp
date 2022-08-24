
class Solution {
public:
    unordered_map<int,int>left,right;
    TreeNode* createBinaryTree(vector<vector<int>>& des) {
        unordered_set<int>c;
        for(auto x:des)c.insert(x[1]);
        int head=-1;
        for(auto x:des)if(c.find(x[0])==c.end())head=x[0];
        TreeNode*root=new TreeNode(head);
        for(auto x:des){
            if(x[2]==1){
                left[x[0]]=x[1];
            }else{
                right[x[0]]=x[1];
            }
        }
        create(root);
        return root;
    }
    void create(TreeNode*root){
        if(root==NULL)return;
        int x=root->val;
        if(left.find(x)!=left.end())root->left=new TreeNode(left[x]);
        if(right.find(x)!=right.end())root->right=new TreeNode(right[x]);
        create(root->left);
        create(root->right);
        return ;
    }
};