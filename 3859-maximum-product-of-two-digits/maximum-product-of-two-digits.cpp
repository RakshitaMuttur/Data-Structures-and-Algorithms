class Solution {
public:
    int maxProduct(int n) 
    {
        std::vector<int> digits;
        int d;
        while(n>0)
        {
            d=n%10;
            digits.push_back(d);
            n=n/10;
        }

        int a, b;
        int max=0;
        int size=digits.size();
        int i=0;
        for(int i=0; i<size; i++)
        {
            for(int j=0;j<size;j++)
            {
                if(i==j) continue;
                a=digits[i];
                b=digits[j];
                if((a*b) > max)
                    max=a*b;
            }
        }
        return max;
    }
};