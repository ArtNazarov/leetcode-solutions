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
// Solution use recursion
void dep(TreeNode* n, int& cdep, int& mx){  
     if (n == nullptr) return; // do not go nullptr
    
     int ml = -1; // depth for empty
     int mr = -1; 
     dep(n->left, ml, mx); // compute for right and left childs
     dep(n->right, mr, mx);
     // ml + mr + 2 is diameter on current level
     // should be compared with maximum diameter mx
     mx = max(mx, ml + mr + 2);
     // depth (height) on current level is 1 + maximum from edges from left and right nodes
     cdep = 1 + max(ml, mr);
}
class Solution {
public:

    int diameterOfBinaryTree(TreeNode* root) {
       if (root == nullptr) return 0;
       // initial values should be 0
       int mx = 0; // will be diameter
       int d = 0; // depth
       dep(root, d, mx);
       return mx;
    }
};