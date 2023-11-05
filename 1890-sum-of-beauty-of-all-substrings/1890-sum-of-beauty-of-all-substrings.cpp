class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            unordered_map<char, int> mp;
            for(int j = i; j < n; j++) {
                mp[s[j]]++;
                if(mp.size() >= 2) {
                    int big = INT_MIN;
                    int small = INT_MAX;
                    for(auto& it : mp) {
                        big = max(big, it.second);
                        small = min(small, it.second);
                    }
                    ans += big - small;
                }
            }
        }
        return ans;
    }
};