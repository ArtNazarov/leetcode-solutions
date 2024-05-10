

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
// Using stack traverse
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
      if (root==nullptr) return true;
      stack<TreeNode*> v;
      int val = root->val;
      v.push(root);
      while (!v.empty()){
        TreeNode* n = v.top(); v.pop();
        if (n->val != val) return false;
        if (n->left != nullptr) v.push(n->left);
        if (n->right != nullptr) v.push(n->right);
      };
      return true;
    }
};