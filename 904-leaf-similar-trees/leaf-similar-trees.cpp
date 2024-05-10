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

void getLeave(TreeNode* n, vector<int>& lv){
    if (n == nullptr) return ;
    if (n->left == nullptr && n->right == nullptr){
        lv.push_back(n->val);
    };
}
// recursive traverse
void traverse(TreeNode* n, vector<int>& lv){
    if (n==nullptr) return ;
    getLeave(n, lv);
    if (n->left != nullptr) traverse(n->left, lv);
    if (n->right != nullptr) traverse(n->right, lv);
}

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> lv1;
        vector<int> lv2;
        traverse(root1, lv1);
        traverse(root2, lv2);
       // for (auto x : lv1) { cout << x << " ";}; cout << endl;
       // for (auto x : lv2) { cout << x << " ";}; cout << endl;
        
        return lv1 == lv2;
    }
};