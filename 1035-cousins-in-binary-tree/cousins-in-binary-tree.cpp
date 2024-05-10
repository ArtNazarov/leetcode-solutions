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
// using recursive traverse
void traverse(TreeNode* n, int dep, TreeNode* parent, pair<int, TreeNode*>& p, int v){
    if (n == nullptr) return ;
    if (n->val == v) {
        p.first = dep;
        p.second = parent;
        return;
    };
    if (n->left != nullptr) traverse(n->left, dep+1, n, p, v);
    if (n->right != nullptr) traverse(n->right, dep+1, n, p, v);
}


class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int, TreeNode*> v1;
        pair<int, TreeNode*> v2;
        traverse(root, 0, nullptr, v1, x);
        traverse(root, 0, nullptr, v2, y);
        return (v1.first == v2.first && v1.second != v2.second);

        
    }
};