class Graph {
    // Algoritm used is floyd warshall
public:
    vector<vector<int>> dp;
    int n;
    Graph(int n, vector<vector<int>>& edges) {
        this->n = n;
        dp.resize(n,vector<int>(n,1e9+7));
        for(int i=0; i<n; i++){
            dp[i][i]=0;
        }
        for(auto x: edges){
            dp[x[0]][x[1]]=x[2];
        }
        for(int k=0; k<n; k++){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
                }
            }
        }
    }
    
    void addEdge(vector<int> edge) {
        dp[edge[0]][edge[1]]=min(dp[edge[0]][edge[1]],edge[2]);
        // for(int k=0; k<n; k++){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    dp[i][j]=min(dp[i][j],dp[i][edge[0]]+dp[edge[1]][j]+dp[edge[0]][edge[1]]);
                }
            }
        // }
    }
    
    int shortestPath(int node1, int node2) {
        return dp[node1][node2] == 1e9+7 ? -1 : dp[node1][node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */