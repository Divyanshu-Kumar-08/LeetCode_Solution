class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentMax = numeric_limits<int>::min();
        int maxSoFar = numeric_limits<int>::min();
        for(int x : nums) {
            if(currentMax < 0) {
                currentMax = 0;
            }
            currentMax += x;
            maxSoFar = max(maxSoFar, currentMax);
        }
        return maxSoFar;
    }
};