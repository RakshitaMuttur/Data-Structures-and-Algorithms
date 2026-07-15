int gcd(int m, int n)
{
    if(m==n)
        return m;
    if(m>n)
        return gcd(m-n,n);
    else
        return gcd(m,n-m);
}
class Solution {
public:
    int gcdOfOddEvenSums(int n) 
    {
        int oddsum=0;
        int evensum=0;
        int k=2*n;
        for(int i=1;i<=k;i++)
        {
            if(i%2==0)
            {
                evensum=evensum+i;
            }
            else
            {
                oddsum=oddsum+i;
            }
        }
        return (gcd(evensum,oddsum));
    }
};