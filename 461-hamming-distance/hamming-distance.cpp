class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int k=x ^ y;
        int one=0;
        while(k>0)
        {
            if(k%2==1) one++;
            k=k/2;
        }
        return one;
    }
};