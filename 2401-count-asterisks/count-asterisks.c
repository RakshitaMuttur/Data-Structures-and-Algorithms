int countAsterisks(char* s) 
{
    int count=0;
    int l=strlen(s);
    int in=0;
    for(int i=0; i<l; i++)
    {
        if(s[i]=='|') in=!in;
    
        else
        {
            if(s[i]=='*' && !in)
            count++;
        }
    }
    return count;
}