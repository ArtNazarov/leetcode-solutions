// BFS algorithm
bool bfs(int n, vector<vector<int>>& edges, int source, int destination){
     
     
    vector<vector<int>> G(n, vector<int>(0));
    for(auto& e : edges){
        G[e[0]].push_back(e[1]);
        G[e[1]].push_back(e[0]); 
    };
     
    // vector<int> path;
    queue<int> q;
     q.push(source);
    vector<bool> visited(n);
     
     do {
        int current = q.front();
        visited[current] = true;
         // path.push_back(current);
        q.pop();
        if (destination == current) {
             
            return true;
        };
             
        bool needErase = false;
        for(auto& x : G[current]){
            if (visited[x]==false){
                q.push(x);
            } else {
                needErase = true;
            };
        };
        if (needErase) G[current].clear();
       // cout << current << " ";
     
     } while (q.size()>0);
    // cout << endl;
        return false;
}


class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
      if (edges.size()<1) return true;
       
      return  bfs(n, edges, source, destination);
    }
};