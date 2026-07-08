class Solution {
    public boolean searchMatrix(int[][] matrix, int target) 
    {
        int rows= matrix.length;
        int cols= matrix[0].length;
        int k=-1;
        for(int i=0; i<rows; i++)
        {
            if(target>= matrix[i][0] && target<= matrix[i][cols-1])
            {
                k=i;
                break;
            }
        }
        if(k<0) 
        {
            return false;
        }
        else
        {
            for(int j=0; j<cols; j++)
            {
                if(matrix[k][j]==target) return true;
            }
        }
        return false;
    }
}