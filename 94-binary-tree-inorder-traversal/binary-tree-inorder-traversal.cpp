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
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> res;
      if (root == nullptr) return res;
      vector<int> nodesInLeft;
      if (root->left != nullptr) nodesInLeft = inorderTraversal(root->left);
       vector<int> nodesInRight;
      if (root->right != nullptr) nodesInRight = inorderTraversal(root->right);
      copy(nodesInLeft.begin(), nodesInLeft.end(), back_inserter(res));
      res.insert(res.end(), root->val);
      copy(nodesInRight.begin(), nodesInRight.end(), back_inserter(res));
      return res;
    }
};