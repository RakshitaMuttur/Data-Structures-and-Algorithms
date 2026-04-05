bool judgeCircle(char* moves) 
{
    int l=strlen(moves);
    for(int i=0; i<l; i++)
    {
        if(moves[i]!='R' && moves[i]!='L' && moves[i]!='U' && moves[i]!='D') 
            return false;
    }
    int rl=0;
    int ud=0;
    for(int i=0;i<l;i++)
    {
        if(moves[i]=='U') ud++;
        if(moves[i]=='D') ud--;
        if(moves[i]=='R') rl++;
        if(moves[i]=='L') rl--;
    }
    if(rl==0 && ud==0) return true;

    return false;
}