class Solution {
public:
    void helper(string& str, int i, int j) {
        while(i < j) {
            char c = str[i];
            str[i] = str[j];
            str[j] = c;
            i++; j--;
        }
    }

    string removeHelper(string& s) {
        string ans = "";
        stack<char> st;
        for(char c : s) {
            if(c == ' ' &&
                (st.empty() || st.top() == ' '))
                continue;
            st.push(c);
        }
        if(!st.empty()) {
            while(!st.empty() && st.top() == ' ')
                st.pop();
        }
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }

    string reverseWords(string s) {
        s = removeHelper(s);
        int i = 0, j = 0;
        while(j < s.size()) {
            while(j < s.size() && s[j] != ' ')
                j++;
            helper(s, i, j-1);
            cout << s << endl;
            j++;
            i = j;
        }
        helper(s, 0, s.size() - 1);
        return s;
    }
};