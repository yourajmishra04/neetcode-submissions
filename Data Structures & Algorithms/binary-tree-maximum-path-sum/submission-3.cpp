/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
   public:
    int ans = INT_MIN;
    int solve(TreeNode* root) {
        if (root == NULL) return 0;

        int l = solve(root->left);
        int r = solve(root->right);
        ans = max(ans, l + r + root->val);
       ans=max(ans,root->val);
        return max(root->val, root->val + max(l, r));
    }
    int maxPathSum(TreeNode* root) {
        int n = solve(root);
        ans = max(ans, n);
        return ans;
    }
};
