class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<double>avg;
        while(!q.empty()){
           long long int n=q.size(),sum=0;
            for(int i=0 ;i<n ;i++){
                TreeNode*cur=q.front();q.pop();
                sum+=cur->val;
                if(cur->left!=NULL)q.push(cur->left);
                if(cur->right!=NULL)q.push(cur->right);
            }
            avg.push_back((double)sum/n);
        }
        return avg;
    }
};