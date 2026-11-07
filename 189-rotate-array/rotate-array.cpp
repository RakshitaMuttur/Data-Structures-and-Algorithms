class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n;
        int l= nums.size();
        int j=0;
        std::vector <int> rot_num;
        std::stack<int> s;
        k=k%l;
        for(int i=l-1; i>=l-k; i--)
        {
            s.push(nums[i]);
        }

        while(!s.empty())
        {
            rot_num.push_back(s.top());
            s.pop();
        }

        for(int i=0; i<l-k; i++)
        {
            rot_num.push_back(nums[i]);
        }
        nums=rot_num;
    }
};