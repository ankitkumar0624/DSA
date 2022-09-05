class Solution {
public:
    vector<int>ans;
    vector<int> preorder(Node* root) {
        if(root==NULL) return ans;
        ans.push_back(root->val);
        for(Node*child:root->children){
            preorder(child);
        }
        return ans;
    }
};