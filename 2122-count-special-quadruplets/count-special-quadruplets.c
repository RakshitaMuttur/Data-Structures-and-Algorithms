int countQuadruplets(int* nums, int numsSize) 
{
    int count=0;
    for(int i=0; i<numsSize-3; i++)
    {
        int a=nums[i];
        for(int j=i+1; j<numsSize-2; j++)
        {
            int b=nums[j];
            for(int k=j+1; k<numsSize-1;k++)
            {
                int c=nums[k];
                for(int l=k+1; l<numsSize;l++)
                {
                    int d=nums[l];
                    int s=a+b+c;
                    if(s==d) count++;
                }
            }
        }
    }
    return count;
}