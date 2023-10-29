class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_set<char> s;
        int i = 0, j = 0;
        int ans = 0;
        while(j < str.size()) {
            if(s.find(str[j]) == s.end()) {
                ans = max(ans, j - i + 1);
                s.insert(str[j]);
                j++;
            } else {
                while(str[i] != str[j]) {
                    s.erase(str[i]);
                    i++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};