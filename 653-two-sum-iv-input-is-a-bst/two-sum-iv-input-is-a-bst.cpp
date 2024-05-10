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

 TreeNode* findVal(TreeNode* root, int val) {
        if (nullptr == root) return nullptr;
        if (root->val == val) return root;
        TreeNode* left = nullptr;
        TreeNode* right = nullptr;
        if (nullptr != root->left && val <=  root->val){
            left = findVal(root->left, val);
            if (left != nullptr) return left;
        };
        if (nullptr != root->right &&  val >=  root->val){
            right = findVal(root->right, val);
            if (right != nullptr) return right;
        };
        return nullptr;
    }

class Solution {
public:
    // traverse with stack
    bool findTarget(TreeNode* root, int k) {
        stack<TreeNode*> v;
        v.push(root);
        while (!v.empty()){
            TreeNode* n = v.top();v.pop();
            int diff = k - n->val;
            TreeNode* other = findVal(root, diff);
            if (nullptr!=other && other!=n) return true;
            if (nullptr != n->left) v.push(n->left);
            if (nullptr != n->right) v.push(n->right);
        }
        return false;
    }
};