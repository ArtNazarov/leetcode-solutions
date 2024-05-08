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
 #include <set>
 using namespace std;
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
         deque<TreeNode*> visited;
         set<TreeNode*> leftNodes;
         if (root == nullptr) return 0;
         visited.push_front(root);
         while (!visited.empty()){
            TreeNode* current = visited.front();
            visited.pop_front();
            // process only left nodes
            if (leftNodes.find(current)!=leftNodes.end()){
                // check no children
                if (current->left == nullptr && current->right == nullptr) 
                    sum+=current->val;
            };

            if (current->left != nullptr) {
                visited.push_front(current->left);
                leftNodes.insert(current->left);
            };
            if (current->right != nullptr){
                visited.push_front(current->right);
            };

         };
         return sum;
    }
};