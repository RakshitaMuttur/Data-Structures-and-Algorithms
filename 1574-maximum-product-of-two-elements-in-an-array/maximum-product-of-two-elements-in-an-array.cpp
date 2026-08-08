class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        std::vector<int> prod(n,0);
        int max=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)continue;

                if(prod[i]<((nums[i]-1) * (nums[j]-1)))
                {
                    prod[i]=(nums[i]-1) * (nums[j]-1);
                }  
            }
        }
        for(int i=0; i<n; i++)
        {
            if(prod[i]>max)
            {
                max=prod[i];
            }
        }
        return max;
    }
};