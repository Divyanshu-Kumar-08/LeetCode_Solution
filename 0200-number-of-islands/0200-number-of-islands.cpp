class Solution {
public:
    void helper(vector<vector<char>>& grid, vector<vector<int>>& visited, int n, int m, int i, int j) {
        if(i < 0 ||
            j < 0 ||
            i >= n ||
            j >= m ||
            visited[i][j] == 1 ||
            grid[i][j] == '0') {
            return;
        } else {
            visited[i][j] = 1;
        }
        
        helper(grid, visited, n, m, i-1, j);
        helper(grid, visited, n, m, i, j+1);
        helper(grid, visited, n, m, i+1, j);
        helper(grid, visited, n, m, i, j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(visited[i][j] == 0 && grid[i][j] == '1') {
                    helper(grid, visited, n, m, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};