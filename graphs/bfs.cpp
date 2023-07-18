class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V + 1, 0);
        vector<int> bfs;
        
        int i = 0;
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                for(auto i : adj[node]){
                    if(!vis[i]){
                        q.push(i);
                        vis[i] = 1;
                    }
                }
            }
        }
        return bfs;
    }
};











