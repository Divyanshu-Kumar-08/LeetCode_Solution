class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = INT_MIN, maxsum = INT_MIN;
        for(int x : nums) {
            if(curr < 0) {
                curr = 0;
            }
            curr += x;
            maxsum = max(maxsum, curr);
        }
        return maxsum;
    }
};