class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int m=mat.size();
        int n=mat[0].size();
        int left; int right; int up; int down;
        std::vector<std::vector<int>> dist(m, std::vector<int>(n,0));

        queue<pair<int,int>> q;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(mat[i][j]==0)
                {
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty())
        {
            auto[s,t]=q.front();
            q.pop();
            left=t-1;
            right=t+1; //columns
            up=s-1;
            down=s+1; //rows
            if(left>=0 && mat[s][left]==1)
            {
                mat[s][left]=0;
                dist[s][left]=dist[s][t]+1;
                q.push({s,left});
            }

            if(right<n && mat[s][right]==1)
            {
                mat[s][right]=0;
                dist[s][right]=dist[s][t]+1;
                q.push({s,right});
            }

            if(up>=0 && mat[up][t]==1)
            {
                mat[up][t]=0;
                dist[up][t]=dist[s][t]+1;
                q.push({up,t});
            }

            if(down<m && mat[down][t]==1)
            {
                mat[down][t]=0;
                dist[down][t]=dist[s][t]+1;
                q.push({down,t});
            }
        }
        return dist;
    }
};