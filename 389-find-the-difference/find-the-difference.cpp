class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int orr[26]={0};
        int i=0;
        while(s[i]!='\0')
        {
            orr[s[i]-'a']++;
            i++;
        }
        i=0;
        while(t[i]!='\0')
        {
            orr[t[i]-'a']--;
            i++;
        }
        i = 0;
        for(i = 0;i<26;i++)
        {
            if(orr[i] < 0) break;
        }
        return 'a' + i;

    }
};