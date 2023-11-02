class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        int ans = 0;
        for(int x : nums) {
            if(s.find(x) != s.end()) {
                ans = x;
                break;
            }
            else
                s.insert(x);
        }
        return ans;
    }
};