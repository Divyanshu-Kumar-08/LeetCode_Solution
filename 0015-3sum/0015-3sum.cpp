class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        for(int i = 0; i < nums.size() - 2; i++) {
            if(nums[i] > 0) break;
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    ans.insert({nums[i], nums[j++], nums[k--]});
                } else if(sum > 0) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        vector<vector<int>> retVal(ans.begin(), ans.end());
        return retVal;
    }
};