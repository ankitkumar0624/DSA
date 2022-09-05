class Solution {
public:
    vector<int>ans;
    vector<int> postorder(Node* root){
        if(root==NULL) return ans;
        for(Node*child:root->children){
            postorder(child);
        }
        ans.push_back(root->val);
        return ans;
    }
};