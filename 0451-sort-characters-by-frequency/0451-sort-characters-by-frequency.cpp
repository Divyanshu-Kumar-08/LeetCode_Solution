class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char c : s)
            mp[c]++;
        vector<pair<char,int>> arr;
        for(auto it : mp)
            arr.push_back({it.first, it.second});
        auto algosort = [](pair<char,int> a, pair<char,int> b) {
            if(a.second < b.second) return false;
            else if(a.second > b.second) return true;
            else if(a.first < b.first) return false;
            else return true;
        };

        sort(arr.begin(), arr.end(), algosort);
        string ans = "";
        for(auto it : arr) {
            for(int i = 0; i < it.second; i++) {
                ans += it.first;
            }
        }
        return ans;
    }
};