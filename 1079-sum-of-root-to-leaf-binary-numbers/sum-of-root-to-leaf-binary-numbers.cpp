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
// Using recursion without stack
void getPath(TreeNode* p, TreeNode* prev, map<TreeNode*, vector<TreeNode*>>& m){
    m[p] = m[prev];
    m[p].push_back(p);
    if (nullptr != p->left) getPath(p->left, p, m);
    if (nullptr != p->right) getPath(p->right, p, m);
}

class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        map<TreeNode*, vector<TreeNode*>> m;
        vector<TreeNode*> v = {};
        m[nullptr] = v;
        getPath(root, nullptr, m);
        int s = 0;
        for (auto node : m){
            TreeNode* n = node.first;
            if (n==nullptr) continue;
            if (n->left == nullptr && n->right == nullptr){
                // leave
                int num = 0;
                for (auto x : m[n]){
                    num = num * 2 + x->val;
                };
                s += num;
            };
        };
        return s;

    }
};