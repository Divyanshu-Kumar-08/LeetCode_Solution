class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int size = height.size() - 1;
        int ans = 0;

        while(i < j) {
            int x = min(height[i], height[j]);
            int val = x * size;
            ans = max(val, ans);
            if(height[i] < height[j]) i++;
            else j--;
            size--;
        }
        return ans;
    }
};