class Solution {
public:
    int candy(vector<int>& r) {
        int n=r.size();
        vector<int>c(n,1);
        if(n<=1) return n;
        for(int i=1;i<n ;i++){
            if(r[i]>r[i-1])c[i]=c[i-1]+1;
        }
        for(int i=n-1;i>0;i--){
            if(r[i-1]>r[i])c[i-1]=max(c[i-1],c[i]+1);
        }
        int total=accumulate(c.begin(),c.end(),0);
        return total;
    }
};