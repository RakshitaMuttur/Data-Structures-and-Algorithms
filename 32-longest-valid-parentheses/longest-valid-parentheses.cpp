class Solution {
public:
    int longestValidParentheses(string s) 
    {
        std::stack<int> st;
        int i=0;
        int count=0;
        st.push(-1);
        int t;
        while(s[i]!='\0')
        {
            if(s[i]=='(')
                st.push(i);
            if(s[i]==')')
            {
                st.pop();
                    if(st.empty()) st.push(i);
                count = max(count, i - st.top());
            }
            i++;
        }
        return count;
    }
};