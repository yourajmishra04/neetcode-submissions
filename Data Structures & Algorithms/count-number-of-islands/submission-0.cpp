class Solution {
   public:
    int n;
    int m;
    void f(vector<vector<char>>& grid, int i, int j) {
        if (i >= n || j >= m || i < 0 || j < 0 || grid[i][j] == '0') return;
        grid[i][j] = '0';
        f(grid, i + 1, j);
        f(grid, i - 1, j);
        f(grid, i, j - 1);
        f(grid, i, j + 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        n = grid.size();
        m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    ans++;
                    f(grid, i, j);
                }
            }
        }
        return ans;
    }
};
