class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) //adjacency matrix
    {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>> q;

        int fresh=0;
        //push rotten oranges to the queue an keep track of fresh oranges
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(grid[i][j]==1)
                {
                    fresh++;
                }
                else continue;
            }
        }
            int time = 0;

            int dr[] = {-1, 1, 0, 0};
            int dc[] = {0, 0, -1, 1};
            int size;
            while(!q.empty() && fresh>0)
            {
                size=q.size(); // the number of rotten oranges in that iteration
                for(int k=0; k<size; k++)
                {
                    auto[r,c]=q.front(); // has the i and j values of that rotten orange
                    q.pop();
                    for(int d=0; d<4; d++)
                    {
                        int nr=r+dr[d];
                        int nc=c+dc[d];

                        if(nr<m && nc<n && nr>=0 && nc>=0 && grid[nr][nc]==1)
                        {
                            grid[nr][nc]=2;
                            q.push({nr, nc});
                            fresh--;
                        }
                    }
                }
                time++;
            }
            if(fresh>0)
                return -1;
            
            return time;
    }
};

