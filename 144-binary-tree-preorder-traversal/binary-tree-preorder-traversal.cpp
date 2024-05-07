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
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr) return res;
        res.push_back(root->val);
        vector<int> nodesInLeft(preorderTraversal(root->left));
        vector<int> nodesInRight(preorderTraversal(root->right));
        ranges::copy(nodesInLeft.begin(), nodesInLeft.end(), back_inserter(res));
        ranges::copy(nodesInRight.begin(), nodesInRight.end(), back_inserter(res));
        return res; 
    }
};