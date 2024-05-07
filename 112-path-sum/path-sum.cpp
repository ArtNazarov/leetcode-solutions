#include <iostream>
#include <utility>
using namespace std;
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
  
  pair<int, bool> summator(TreeNode* t, int targetSum, int counter){
    if (t==nullptr) {
        return make_pair(counter, false);
    };
    pair<int, bool> tree = make_pair(t->val + counter, false);

     tree.second = targetSum == (t->val + counter);

   // cout << "Current node " << t->val << endl;
    
     if (t->left == nullptr && t->right == nullptr) {
       
    // cout << "Leaf sum = " << t->val + counter << endl;
       
        if (tree.second) return tree;
       
     };

   

    if (t->left != nullptr) {

     tree = summator( t->left,  targetSum,  t->val + counter);


      
     if (tree.first == targetSum) return tree;
      
     };

    if (t->right != nullptr) {



     tree = summator( t->right,   targetSum, t->val + counter);



     if (tree.first == targetSum) return tree;

     };


     

    

    return make_pair(0, false);       
      

    
     
   } 
     


    bool hasPathSum(TreeNode* root, int targetSum) {
      
      return  summator(root, targetSum, 0).second;
    }
};