class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(char c : str) {
            if(s.empty())
                s.push(c);
            else if (c == '[' || c == '(' || c == '{')
                s.push(c);
            else if(c == '}' && s.top() == '{' ||
                    c == ']' && s.top() == '[' ||
                    c == ')' && s.top() == '(')
                s.pop();
            else
                return false;
        }
        return s.empty();
    }
};