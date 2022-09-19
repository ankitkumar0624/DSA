class Solution {
public:
 	int find(int x, vector<int>& parent) {
 		if (parent[x] == x) return parent[x];
        return parent[x] = find(parent[x], parent);
 	}
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> parent(n);
        for(int i=0; i<n; i++){
            parent[i] = i;
        }
 		int compo = 0;
        for (auto& it: connections) {
 			int x = find(it[0], parent);
 			int y = find(it[1], parent);
            if(x == y){
                continue;
            }
            else {
                parent[y] = x;
                compo++;
            }
 		}
        return connections.size() < n-1 ? -1 : n-1-compo;
    }
    
};