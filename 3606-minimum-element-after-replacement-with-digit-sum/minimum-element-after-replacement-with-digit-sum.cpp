class Solution {
private:
    int sumEle(int n)
    {
        int d;
        int sum=0;
        while(n>0)
        {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        return sum;
    }
public:
    int minElement(vector<int>& nums) 
    {
        int n=nums.size();
        int s=0;
        for(int i=0; i<n; i++)
        {
            s=sumEle(nums[i]);
            nums[i]=s;
        }
        int min=nums[0];
        for(int i=0; i<n; i++)
        {
            if(nums[i]<min) min=nums[i];
        }
        return min;
    }
};