class Solution {
public:
    int maxChunksToSorted(vector<int>& arr){
        int n=arr.size();
        int chunks=0;
        for(int i=0,j=0;i<n&&j<n;i++){
            bool flag=true;
            for(int k=j;k<=i;k++){
                if(j<=arr[k]&&arr[k]<=i)continue;
                else{
                    flag=false;
                    break;
                }
            }
            if(flag){
                j=i+1;
                chunks++;
            }
        }
        return chunks;
    }
};