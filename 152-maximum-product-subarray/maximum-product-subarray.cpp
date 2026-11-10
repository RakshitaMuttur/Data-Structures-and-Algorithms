class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        int min=nums[0];
        int max=nums[0];
        int curMax=nums[0];
        int temp;

        for(int i=1; i<n; i++)
        {
            temp=std::max({nums[i], curMax*nums[i], min*nums[i]});
            min=std::min({nums[i], curMax*nums[i], min*nums[i]});

            curMax=temp;
            max=std::max(max, curMax);
        }
        return max;
    }
};