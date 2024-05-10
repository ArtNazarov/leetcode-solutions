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
    TreeNode* increasingBST(TreeNode* root) {
        if (root==nullptr) return nullptr;
       vector<int> x;
       stack<TreeNode*> v;
       v.push(root);
       while (!v.empty()){
            TreeNode* n = v.top(); v.pop();
            x.push_back(n->val);
            if (nullptr != n->left) v.push(n->left);
            if (nullptr != n->right) v.push(n->right);
       };
       ranges::sort(x);
       TreeNode* res = new TreeNode(x[0]);
       TreeNode* insNode = res;
       for(int i=1;i<x.size();i++){
         TreeNode* subNode = new TreeNode(x[i]);
         insNode->right = subNode;
         insNode = insNode->right;
       };
       return res;

    }
};