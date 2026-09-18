class Solution {
   public:
    int n, m, s;
    vector<vector<bool>> vis;
    bool solve(vector<vector<char>>& board, string word, int i, int j, int idx) {
        if (idx >= s) return 1;
        if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] || board[i][j] != word[idx]) return 0;
        vis[i][j] = 1;

        bool ans =

            solve(board, word, i + 1, j, idx + 1) || solve(board, word, i - 1, j, idx + 1) ||
            solve(board, word, i, j + 1, idx + 1) || solve(board, word, i, j - 1, idx + 1);
            vis[i][j]=0;
        return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {
        s = word.size();
        n = board.size();
        m = board[0].size();
        vis.assign(n, vector<bool>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    vis.assign(n, vector<bool>(m, 0));

                    if (solve(board, word, i, j, 0)) return 1;
                }
            }
        }
        return 0;
    }
};
