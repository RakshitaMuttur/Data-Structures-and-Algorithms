class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int arr[100001] = {0};
        int n=nums.size();
        int i= 0;
        for(i = 0;i<n;i++)
        {
            if(arr[nums[i]] == 1) break;
            else arr[nums[i]]++;
        }
        return nums[i];
    }
};