class Solution {
public:
    int findKthPositive(vector<int>& A, int k) {
        int i=1 ,cnts=0,ans=-1;
        unordered_set<int>st(A.begin(),A.end());
        while(cnts<k){
            if(st.find(i)==st.end()){
                cnts++;
                ans=i;
                st.insert(i);
            }
            i++;
        }
        return ans;
    }
};