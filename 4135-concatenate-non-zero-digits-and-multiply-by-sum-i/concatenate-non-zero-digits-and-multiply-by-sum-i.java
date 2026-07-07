class Solution {
    public long sumAndMultiply(int n) 
    {
        long x=0;
        long d, i=0;
        while(n!=0)
        {
            d=n%10;
            if(d!=0) 
            {
                x = x+d*(long)(Math.pow(10, i++));
            }
            n=n/10;
        }

        long sum=0;
        long y=x;
        while(y!=0)
        {
            d=y%10;
            sum=sum+d;
            y=y/10;
        }

        long result=x*sum;
        return result;
    }
}