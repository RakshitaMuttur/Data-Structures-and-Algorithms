int lengthOfLongestSubstring(char* s) 
{
    int l=strlen(s);
    //int substr_len=0;
    int count=0;
    int max=0;
    if(strlen(s)==1)
        max=1;
    else
    {
        for(int i=0; i<l-1; i++)
    {
        count=0;
        int visted[256]={0};
        for(int j=i; j<l; j++)
        {
            if(visted[s[j]]==1) break;

            visted[s[j]]=1;
            count++;
        }
        if(count>max)
            max=count;
    }
    }
    return max;
}