int max(int x, int y)
{
    return((x>y) ? x : y); 
}

int lcs(char *str1, char *str2,int m, int n)
{
    if(m==0 || n==0) return 0;

    int dp[m+1][n+1];
    for(int i=0; i<=m; i++)
    {
        dp[i][0]=0;
    }

    for(int j=0;j<=n; j++)
    {
        dp[0][j]=0;
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(str1[i-1]==str2[j-1])
            dp[i][j]=1+dp[i-1][j-1];

            else
            dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[m][n];
}

int longestCommonSubsequence(char* text1, char* text2) 
{
    int m=strlen(text1);
    int n=strlen(text2);
    int l=lcs(text1, text2, m, n);
    return l;
}