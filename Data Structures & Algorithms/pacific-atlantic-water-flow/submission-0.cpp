class Solution {
   public:
    int n, m;
    void solve(vector<vector<int>>& h, vector<vector<int>>& mat, vector<vector<bool>>& vis, int i,
               int j, int prev) {
        if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j]) return;
        if (h[i][j] < prev) return;
        vis[i][j] = 1;

        mat[i][j]++;
        int curr = h[i][j];

        solve(h, mat, vis, i + 1, j, curr);
        solve(h, mat, vis, i - 1, j, curr);
        solve(h, mat, vis, i, j + 1, curr);
        solve(h, mat, vis, i, j - 1, curr);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        n = h.size();
        m = h[0].size();
        vector<vector<int>> mat(n, vector<int>(m, 0));
        vector<vector<bool>> vis(n, vector<bool>(m, 0));

        for (int i = 0; i < n; i++) solve(h, mat, vis, i, 0, INT_MIN);
        for (int i = 0; i < m; i++) solve(h, mat, vis, 0, i, INT_MIN);

        vis.assign(n, vector<bool>(m, 0));
        for (int i = 0; i < n; i++) solve(h, mat, vis, i, m - 1, INT_MIN);
        for (int i = 0; i < m; i++) solve(h, mat, vis, n - 1, i, INT_MIN);

        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 2) ans.push_back({i, j});
            }
        }
        return ans;
    }
};
