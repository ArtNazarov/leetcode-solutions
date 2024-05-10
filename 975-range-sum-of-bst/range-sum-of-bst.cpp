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
 // Using stack
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int s = 0;
        stack<TreeNode*> v;
        v.push(root);
        while (!v.empty()){
            TreeNode* n = v.top(); v.pop();
            if (n->val >= low && n->val <= high) s+=n->val;
            if (nullptr != n->left) v.push(n->left);
            if (nullptr != n->right) v.push(n->right);
        };
        return s;
    }
};