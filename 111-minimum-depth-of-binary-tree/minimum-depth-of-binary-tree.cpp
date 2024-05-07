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
#include <iostream>
#include <climits>
using namespace std;
class Solution {
public: 


bool isLeaf(TreeNode *root){
     
     return (root->left == nullptr && root->right == nullptr);
      
}

int minDepth(TreeNode *root) {
  if (root == nullptr) {
    return 0;
  };
  if (isLeaf(root)){
    return 1;
  }
  int leftSize = INT_MAX;
  if (root->left != nullptr) {
    leftSize = minDepth(root->left);
  };
  int rightSize = INT_MAX;
  if (root->right != nullptr) {
    rightSize = minDepth(root->right);
  };
   
  return 1 + min(leftSize, rightSize);
}
};