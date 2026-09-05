class Solution {
   public:
    bool flg = 0;
    void solve(vector<vector<int>>& mat, int node, vector<bool>& vis, vector<bool>& done) {
        if (vis[node]) {
            flg = 1;
            return;
        }
        if (done[node]) return;
        vis[node] = 1;
        for (int x : mat[node]) {
            solve(mat, x, vis,done);
            if (flg == 1) return;
        }
        vis[node] = 0;
        done[node] = 1;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> mat(n);
        for (auto p : prerequisites) {
            mat[p[0]].push_back(p[1]);
        }
        vector<bool> vis(n, 0);
        vector<bool> done(n, 0);
        for (int i = 0; i < n; i++) {
            if (!done[i]) solve(mat, i, vis, done);
            if (flg == 1) return 0;
        }
        return 1;
    }
};
