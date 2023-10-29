class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i = 0, j = 1;
        int ans = 1;
        while(j < nums.size()) {
            if(nums[j] > nums[j-1]) {
                ans = max(ans, j - i + 1);
                j++;
            } else {
                i = j;
                j++;
            }
        }
        return ans;
    }
};