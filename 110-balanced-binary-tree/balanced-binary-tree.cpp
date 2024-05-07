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

int dep(TreeNode* n){
    if (n==nullptr) return 0;
    return 1 + max(dep(n->left), dep(n->right)); 
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        deque<TreeNode*> v;
        v.push_front(root);
        while (!v.empty()){
            TreeNode* n = v.front(); v.pop_front();
           // cout << n->val << endl;
            
            int d1 = dep(n->left);
            int d2 = dep(n->right);
           // cout << d1 << " " << d2 << endl;
            if (abs(d1-d2)>1) return false;
            if (n->left != nullptr) v.push_front(n->left);
            if (n->right != nullptr) v.push_front(n->right);
        };
        return true;
    }
};