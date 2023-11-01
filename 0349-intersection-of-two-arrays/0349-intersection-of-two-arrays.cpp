class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for(int x : nums1) {
            s.insert(x);
        }
        unordered_set<int> ansSet;
        for(int x : nums2) {
            if(s.find(x) != s.end()) {
                ansSet.insert(x);
            }
        }
        vector<int> ans(ansSet.begin(), ansSet.end());
        return ans;
    }
};