// class Solution {
//   public:
//     int countConnected(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<int>> adj(V);

//         for (auto &e : edges) {
//             int u = e[0], v = e[1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         vector<int>vis(V,0);
//         int ans=0;
//         queue<int>q;
        
//         for(int i=0;i<V;i++){
//         if(vis[i]==0){
//             q.push(i);
//         ans++;
//         }
//         while(!q.empty()){
//             int temp=q.front();
//             q.pop();
//             for(auto it: adj[temp]){
//                 if(!vis[it]){
//                     q.push(it);
//                 }
//             }
//         }
//         }        
//         return ans;
//     }
// };

class Solution {
public:
void dfss(int temp,vector<vector<int>> &adj,vector<int>& vis){
    vis[temp] = 1;
    for (auto it : adj[temp]){
        if(vis[it]==0){
            dfss(it,adj,vis);
        }
    }
            
    
}
    int countConnected(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);

        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(V, 0);
        int ans = 0;
    
        
        for (int i = 0; i < V; i++) {
            if (vis[i] == 0) {
                int temp=i;
                ans++;
            
    
            dfss(temp,adj,vis);
            }
        }

        return ans;
       
    }
};
