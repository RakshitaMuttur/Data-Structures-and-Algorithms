class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int k=start ^ goal;
        int one=0;
        while(k>0)
        {
            if(k%2==1) one++;
            k=k/2;
        }
        return one;
    }
};