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
// Recursive solution
class Solution {
public:
    bool evaluateTree(TreeNode* root) {
            const int opAND = 3;
            const int opOR = 2;
            if (root->left == nullptr && root->right == nullptr) return root->val;
            if (root->val == opAND) {
                return evaluateTree(root->left) && evaluateTree(root->right);
            };
            if (root->val == opOR) {
                return evaluateTree(root->left) || evaluateTree(root->right);
            };
            return false;     
    }
};