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
    // Recursive solution
    TreeNode* searchBST(TreeNode* root, int val) {
       if (root == nullptr) return nullptr;
       //cout << root->val << endl;
       if (root->val==val) {
            return root;
       };
       if (root->left!=nullptr && root->val > val){
         return searchBST(root->left, val);
       };
        if (root->right!=nullptr && root->val < val){
         return searchBST(root->right, val);
        };
        return nullptr;
    }
};