class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        k=k%nums.size();
        if(nums.size()==0 || nums.size()==1)
        {
            nums=nums;
        }
        else
        {
            std::reverse(nums.begin(), nums.end());
            std::reverse(nums.begin(), nums.begin()+k);
            std::reverse(nums.begin()+k, nums.end());
        }

    }
};