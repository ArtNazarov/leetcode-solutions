#include <map>
#include <vector>
#include <iostream>
using namespace std;

// Recursive method
 void grabLevel(TreeNode* n, int dep, map<int,  int>& vals){
     if (n == nullptr) return;
     if (vals.find(dep) == vals.end() ){
         vals[dep] = n->val;
     } else {
        if (n->val > vals[dep]) vals[dep] = n->val;
     };
     if (n->left != nullptr) grabLevel(n->left, dep+1, vals);
     if (n->right != nullptr) grabLevel(n->right, dep+1, vals);

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
    vector<int> largestValues(TreeNode* root) {
            map<int, int> vals;
            vector<int> res;
            grabLevel(root, 0, vals);
            for (auto p : vals){
                res.push_back(p.second);
            };
            return res;
    }
};