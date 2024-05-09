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

bool isSub(TreeNode* root, TreeNode* subRoot){
    if (root==nullptr && subRoot==nullptr) return true;
    if (root==nullptr && subRoot!=nullptr) return false;
    if (root!=nullptr && subRoot==nullptr) return false;
        if (root->left == nullptr && subRoot->left != nullptr) return false;
        if (root->right == nullptr && subRoot->right != nullptr) return false;

        if (root->right == nullptr && subRoot->right == nullptr && root->left == nullptr && subRoot->left == nullptr) return
          (root->val == subRoot->val) && isSub(root->right, subRoot->right);

        if (root->left == nullptr && subRoot->left == nullptr && root->right == nullptr && subRoot->right == nullptr) return
          (root->val == subRoot->val) && isSub(root->left, subRoot->left);
  
        return (root->val == subRoot->val) && isSub(root->left, subRoot->left)
         && isSub(root->right, subRoot->right);
}

class Solution {
public:
        //  traverse with stack
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()){
            TreeNode* n = st.top(); st.pop();
            if (isSub(n, subRoot)) return true;
            if (nullptr != n->left) st.push(n->left);
            if (nullptr != n->right) st.push(n->right);
        };
        return false;
    }
};