class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        auto comp = [](vector<int> a, vector<int> b) { return a[0] < b[0]; };
        sort(intervals.begin(), intervals.end(), comp);
        vector<vector<int>> ans;
        int i = 0, j = 1;
        int p = intervals[0][0];
        int q = intervals[0][1];
        while(j < intervals.size()) {
            if(intervals[j][0] >= p && intervals[j][0] <= q) {
                q = max(q, intervals[j][1]);
            } else {
                vector<int> newArr = {p, q};
                ans.push_back(newArr);
                p = intervals[j][0];
                q = intervals[j][1];
            }
            j++;
        }
        vector<int> a = {p, q};
        ans.push_back(a);
        return ans;
    }
};