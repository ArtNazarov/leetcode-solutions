#include <vector>
using namespace std;

void getNodes(TreeNode* root, vector<int>& values){
        if (root == nullptr) return;  
        if (root->left!=nullptr) getNodes(root->left, values);
        values.push_back(root->val);
        if (root->right!=nullptr) getNodes(root->right, values);
       
}

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
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;
        vector<int> values;
        getNodes(root, values);
        vector<int> ov;
        copy(values.begin(), values.end(), back_inserter(ov));
        sort(ov.begin(), ov.end());
        ov.erase(unique(ov.begin(), ov.end()), ov.end());
        return ov == values;
    }
};