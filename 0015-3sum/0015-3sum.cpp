class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> setAns;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++) {
            if(nums[i] > 0)
                break;
            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > 0)
                    k--;
                else if(sum < 0)
                    j++;
                else {
                    vector<int> arr;
                    setAns.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
            }
        }
        for(vector<int> arr : setAns) {
            ans.push_back(arr);
        }
        return ans;
    }
};