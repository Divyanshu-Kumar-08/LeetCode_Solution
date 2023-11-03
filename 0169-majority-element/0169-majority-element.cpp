class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans = 0;
        int n = nums.size();
        for(int x : nums){
            m[x]++;
        }
        for(const auto& it : m) {
            if(it.second > n/2) {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};