class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        int n=points.size();
        std::vector<std::vector<int>> dist;
        std::vector<int> temp;
        int d;
        int t;
        int min;
        int max_d=std::pow(points[0][0], 2)+std::pow(points[0][1], 2);
        temp.push_back(max_d);
        for(int m=0; m<k; m++)
        {
            max_d=INT_MAX;
            min=m;
            for(int i=m; i<n; i++)
            {
                d=std::pow(points[i][0], 2)+std::pow(points[i][1], 2);
                if(d < max_d)
                {
                    max_d=d;
                    min=i;
                }    
            }
            std::swap(points[m], points[min]);
            dist.push_back(points[m]);
        }

        return dist;
    }
};