class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int n=q.size();
            int prev=INT_MIN,prev1=INT_MAX;
            for(int i=0;i<n;i++){
                TreeNode*cur=q.front();q.pop();
                if(flag){
                    if(cur->val%2!=0){
                        if(cur->val>prev){
                            prev=cur->val;
                        }else{
                            return false;
                        }
                    }else{
                        return false;
                    }
                }else{
                    if(cur->val%2==0){
                        if(prev1>cur->val){
                            prev1=cur->val;
                        }else{
                            return false;
                        }
                    }else{
                        return false;
                    }
                }
                if(cur->left!=NULL)q.push(cur->left);
                if(cur->right!=NULL)q.push(cur->right);
            }
            flag=!flag;
        }
        return true;
    }
};