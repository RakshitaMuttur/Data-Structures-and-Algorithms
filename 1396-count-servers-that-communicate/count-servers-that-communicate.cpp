class Solution {
public:
    int countServers(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();

        std::vector<int> ncr(m,0);
        std::vector<int> ncc(n,0);

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==1)
                {
                    ncr[i]++;
                    ncc[j]++;
                }
            }
        }

        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==1)
                {
                    if(ncr[i]>1 || ncc[j]>1) c++;
                }
            }
        }
        
        return c;
    }
};