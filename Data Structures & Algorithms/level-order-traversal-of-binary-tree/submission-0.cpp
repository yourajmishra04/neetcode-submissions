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
     vector<vector<int>> ans;
     void solve(queue<TreeNode*>& q){
        if(q.empty()) return;
        vector<int>v;
        queue<TreeNode*>qq;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            v.push_back(it->val);
            if(it->left!=NULL) qq.push(it->left);
             if(it->right!=NULL) qq.push(it->right);
        }
        ans.push_back(v);
        solve(qq);
     }
    vector<vector<int>> levelOrder(TreeNode* root) {
            ans.clear();
        if(root==NULL) return ans;
          queue<TreeNode*>qq;
          qq.push(root);
      
          solve(qq);
          return ans;
    }
};
