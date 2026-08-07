class Solution {

private:
    void dfs(int node, vector<vector<int>> &adj, vector<int> &visit)
    {
        visit[node]=1;
        for(auto it: adj[node])
        {
            if(!visit[it])
            {
                dfs(it, adj, visit);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int m=isConnected.size();
        int n=isConnected[0].size();
        std::vector<std::vector <int>> adj(n);

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j && isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                }
            }
        }

        std::vector<int> visit(n,0);
        int count=0;

        for(int i=0; i<n; i++)
        {
            if(visit[i]==0)
            {
                dfs(i, adj, visit);
                count++;
            }
        }
        return count;
    }
};