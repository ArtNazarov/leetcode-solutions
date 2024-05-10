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
    int minDiffInBST(TreeNode* root) {
        stack<TreeNode*> v;
        vector<int> x;
        v.push(root);
        while (!v.empty()){
            TreeNode* n = v.top(); v.pop();
            x.push_back(n->val);
            if (nullptr != n->left) v.push(n->left);
            if (nullptr != n->right) v.push(n->right);
        };
        ranges::sort(x);
       /* for (auto val : x){
            cout << val << " ";
        };
        cout << endl; */
        
        int md = INT_MAX;
        for (int i=1;i<x.size(); i++ ){
            if (x[i] - x[i-1] < md){
                md = x[i] - x[i - 1];
            }
        };
        return (md == INT_MAX) ? 0 : md;
    }
};