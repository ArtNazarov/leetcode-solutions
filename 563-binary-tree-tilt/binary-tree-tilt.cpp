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
    int findTilt(TreeNode* root) {
       int s = 0;
       int tRoot = tilt(root, s);
       return s;
    }
    int tilt(TreeNode* root, int& s){
      if (root == nullptr) return 0;
      int tLeft = 0;
      int tRight = 0;
      if (!m[root->left]||!m[root->right]){
        tLeft = tilt(root->left, s);
        tRight = tilt(root->right, s);
      } 
      else {
        tLeft = t[root->left];
        tRight = t[root->right];
      }
      // sum of tilts should include root->val
      int sum = tLeft + tRight + root->val;
      // compute |tLeft-tRight| and add to sum
      s += abs(tLeft - tRight);
      return sum;
 }
 map<TreeNode*, int> t;
 map<TreeNode*, bool> m;
};