class Solution {
public:
    int minDeletion(vector<int>& N) {
        stack<int>st;
        int m=N.size(),del=0;
        for(int i=0;i<m;i++){
             st.push(N[i]);
            if(!st.empty()&&st.size()>1&&st.size()%2==0){
                int t1=st.top();st.pop();
                int t2=st.top();st.pop();
                if(t1!=t2){
                    st.push(t1);
                    st.push(t2);
                }else{
                    del++;
                    st.push(t1);
                }
            }
        }
        if(st.size()>0&&st.size()%2!=0)del++;
        return del;
    }
};