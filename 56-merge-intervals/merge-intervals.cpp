class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int min, max;
        int j=0, i=0;
        min=intervals[0][0];
        max=intervals[0][1];

        std::sort(intervals.begin(), intervals.end());
        std::vector<std::vector<int>> merge_vec;
        merge_vec.push_back({intervals[0]});
        for(i = 1; i < intervals.size(); i++)
        {
            if(merge_vec[j][1] >= intervals[i][0])
            {
                min=std::min(intervals[i][0], merge_vec[j][0]);
                max=std::max(intervals[i][1], merge_vec[j][1]);
                std::vector<int> vec = {min, max};
                merge_vec[j][0]=min;
                merge_vec[j][1]=max;
            }
            else 
            {
                merge_vec.push_back({intervals[i]});
                j++;
            }
        }
        
        return merge_vec;
    }
};