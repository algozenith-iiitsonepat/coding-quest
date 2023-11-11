class Graph
{
    public:
        /*
        It's a direct application of Dijkstra algo 
        */
        vector<pair<int, int>> adj[101];
    Graph(int n, vector<vector < int>> &edges)
    {

        for (auto it: edges)
        {
            int a = it[0];
            int b = it[1];
            int c = it[2];
            adj[a].push_back({ b,  c });
        }
    }

    void addEdge(vector<int> edge)
    {
        int a = edge[0];
        int b = edge[1];
        int c = edge[2];
        adj[a].push_back({ b, c });
    }

    int shortestPath(int node1, int node2)
    {

        multiset<pair<int, int>> m;
        vector < long long int > d(100 + 1, 1e18);
        d[node1] = 0;
        m.insert({ 0,node1 });
        while (m.size())
        {

            int a = m.begin()->first;
            int b = m.begin()->second;

            m.erase(m.begin());

            for (auto it: adj[b])
            {
                if (a + it.second < d[it.first])
                {
                    d[it.first] = a + it.second;
                    m.insert({ d[it.first], it.first });
                }
            }
        }

        if (d[node2] == 1e18) return -1;
        return d[node2];
    }
};

/**
 *Your Graph object will be instantiated and called as such:
 *Graph* obj = new Graph(n, edges);
 *obj->addEdge(edge);
 *int param_2 = obj->shortestPath(node1,node2);
 */