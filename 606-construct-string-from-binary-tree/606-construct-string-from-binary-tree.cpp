class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root==NULL) return "";
        string result=to_string(root->val);
        string left=tree2str(root->left);
        string right=tree2str(root->right);
        
        if(left==""&&right=="")return result;
        if(left=="")return result+"()"+"("+right+")";
        if(right=="")return result+"("+left+")";
        return result+"("+left+")"+"("+right+")";
    }
};