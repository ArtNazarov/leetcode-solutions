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
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> f;
        vector<int> res;
        if (root==nullptr) return res;
        stack<TreeNode*> visited;
        visited.push(root);
        while (!visited.empty()){
            TreeNode* v = visited.top();
            visited.pop();
            f[v->val]++;
            if (v->left != nullptr) visited.push(v->left);
            if (v->right != nullptr) visited.push(v->right);
        };
        vector<int> freqs;
        for (auto p : f) freqs.push_back(p.second);
        sort(freqs.begin(), freqs.end());
        int max_f = freqs[freqs.size()-1];
        for (auto p : f) {
            if (p.second == max_f) res.push_back(p.first);
        };
        return res;
    }
};