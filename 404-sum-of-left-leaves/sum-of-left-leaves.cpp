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
 #include <stack>
 #include <set>
 using namespace std;
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
         stack<TreeNode*> visited;
         unordered_set<TreeNode*> leftNodes;
         if (root == nullptr) return 0;
         visited.push(root);
         while (!visited.empty()){
            TreeNode* current = visited.top();
            visited.pop();
            // process only left nodes
            if (leftNodes.find(current)!=leftNodes.end()){
                // check no children
                if (current->left == nullptr && current->right == nullptr) 
                    sum+=current->val;
            };

            if (current->left != nullptr) {
                visited.push(current->left);
                leftNodes.insert(current->left);
            };
            if (current->right != nullptr){
                visited.push(current->right);
            };

         };
         return sum;
    }
};