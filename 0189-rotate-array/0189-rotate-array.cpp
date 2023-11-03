class Solution {
public:
    void helper(vector<int>& nums, int i, int j) {
        while(i < j) {
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++; j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        helper(nums, 0, n - k - 1);
        helper(nums, n - k, n - 1);
        helper(nums, 0, n - 1);
    }
};