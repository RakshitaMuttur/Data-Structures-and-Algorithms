int countMonobit(int n) 
{
    if(n==0)return 1;
    int num=1;
    int count=1;
    while(num<=n)
    {
        count++;
        num= (num<<1) | 1;
    }
    return count;
}