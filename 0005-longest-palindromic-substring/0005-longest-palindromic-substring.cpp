class Solution {
public:
    bool check(string& s, int i, int j) {
        while(i < j) {
            if(s[i] != s[j])
                return false;
            i++; j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int ans = 1;
        int p = 0, q = 0;
        for(int i = 0; i < s.length() - 1; i++) {
            for(int j = i + 1; j < s.length(); j++) {
                if(check(s, i, j)){
                    int size = j - i + 1;
                    if(size > ans) {
                        ans = size;
                        p = i;
                        q = j;
                    }
                }
            }
        }
        return s.substr(p, q - p + 1);
    }
};