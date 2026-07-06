class Solution {
    public int[] leftRightDifference(int[] nums) 
    {
        int n=nums.length;
        int[] lsum=new int[n];
        int[] rsum=new int[n];
        int[] diff=new int[n];
        lsum[0]=0;
        rsum[n-1]=0;

        int ls, rs;

        for(int i=0; i<n; i++)
        {
            ls=0; 
            rs=0;
            for(int k=0; k<i; k++)
            {
                ls=ls+nums[k];
            }
            lsum[i]=ls;

            for(int k=i+1; k<n; k++)
            {
                rs=rs+nums[k];
            }
            rsum[i]=rs;
        }

        for(int j=0; j<n; j++)
        {
            diff[j]= Math.abs(lsum[j]-rsum[j]);
        }
        
        return diff;
    }
}