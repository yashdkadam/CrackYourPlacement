class Solution {
  public:
    void dfs(int ind, vector<int> adj[], int vis[], vector<int> &ls){
        vis[ind] = 1;
        ls.push_back(ind);
        for(auto it : adj[ind]){
            if(!vis[it]){
                dfs(it, adj, vis, ls);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};
        int start = 0;
        vector<int> ls;
        dfs(start, adj, vis, ls);
        return ls;
    }
};