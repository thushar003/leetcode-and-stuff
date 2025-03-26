class Solution {
public:
    bool isValid(string s) {
        stack<char> parenStack;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                parenStack.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (parenStack.empty() || parenStack.top() != '(')
                {
                    return false;
                }
                parenStack.pop();
            }
            else if (s[i] == ']')
            {
                if (parenStack.empty() || parenStack.top() != '[')
                {
                    return false;
                }
                parenStack.pop();
            }
            else if (s[i] == '}')
            {
                if (parenStack.empty() || parenStack.top() != '{')
                {
                    return false;
                }
                parenStack.pop();
            }
        }
        return parenStack.empty();
    }
};