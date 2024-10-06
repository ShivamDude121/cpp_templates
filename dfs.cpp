 void dfs(int node, vector<int> adj[], int vis[]) {
        vis[node] = 1; 
        cout<<node<<" "; 
        // traverse all its neighbours
        for(auto it : adj[node]) {
            // if the neighbour is not visited
            if(!vis[it]) {
                dfs(it, adj, vis); 
            }
        }
    }
