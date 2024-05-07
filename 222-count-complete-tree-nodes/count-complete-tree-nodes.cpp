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
#include <deque>
using namespace std;
class Solution {
public:
    int countNodes(TreeNode* root) {
      if (root == nullptr) return 0;
      deque<TreeNode*> visited;
      int counter = 0;
      visited.push_front(root);
      while (!visited.empty()){
        TreeNode* p = visited.front();
        visited.pop_front();
        counter ++;
        if (p->left != nullptr) visited.push_front(p->left);
        if (p->right != nullptr)  visited.push_front(p->right);
      };
      return counter;  
    }
};