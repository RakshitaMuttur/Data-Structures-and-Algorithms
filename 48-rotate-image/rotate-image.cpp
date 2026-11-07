class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int temp;
        //int m=matrix.size()/matrix[0].size();
        int n = matrix[0].size(); //number of elements in each row
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int k=0; k<n/2; k++)
            {
                temp=matrix[i][k];
                matrix[i][k]=matrix[i][n-k-1];
                matrix[i][n-k-1]=temp;
            }
        }

    }
};