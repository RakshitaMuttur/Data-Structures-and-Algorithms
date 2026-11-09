class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int max=INT_MIN;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum=std::max(nums[i], sum+nums[i]);
            max=std::max(sum, max);
        }

        return max;
    }
};