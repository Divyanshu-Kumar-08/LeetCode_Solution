class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = nums.size() - 1;
        while(i <= k)
        {
            if(nums[i] == 1)
            {
                i++;
            }
            else if(nums[i] == 0)
            {
                int t = nums[j];
                nums[j] = nums[i];
                nums[i] = t;
                j++;
                i++;
            }
            else
            {
                int t = nums[i];
                nums[i] = nums[k];
                nums[k] = t;
                k--;
            }
        }
    }
};