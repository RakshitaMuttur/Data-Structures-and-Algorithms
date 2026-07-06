class Solution {
    public void setZeroes(int[][] matrix) 
    {
        int r= matrix.length;
        int c= matrix[0].length;
        int[] rows=new int[r];
        int[] columns=new int[c];

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(matrix[i][j]==0)
                {
                    rows[i]=1;
                    columns[j]=1;
                }
            }
        }

        for(int m=0; m<r; m++)
        {
            if(rows[m]==1)
            {
                for(int p=0; p<c; p++)
                {
                    matrix[m][p]=0;
                }
            }
        }

        for(int n=0; n<c; n++)
        {
            if(columns[n]==1)
            {
                for(int q=0; q<r; q++)
                {
                    matrix[q][n]=0;
                }
            }
        }
    }
}