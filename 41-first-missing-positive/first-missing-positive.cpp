class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        // int n=nums.size();
        // auto max=std::max_element(nums.begin(), nums.end());
        // int m= *max;
        // bool exists;
        // int val;

        // for(int i=1; i<=m; i++)
        // {
        //     exists=std::find(std::begin(nums), std::end(nums), i) !=std::end(nums);
        //     if(!exists)
        //     {
        //         val=i;
        //         break;
        //     }
        // }
        // return val;

        std::set<int>s;
        std::sort(nums.begin(), nums.end());

        int n= nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]<=0) continue;
            s.insert(nums[i]);
        }

        int count = 1;
        for(auto i:s)
        {
            if(count != i) break;
            count++;
        }

        return count;

    }
};