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
         unordered_map<TreeNode*, int> leftNodes;
         if (root == nullptr) return 0;
         visited.push(root);
         leftNodes[root] = 0;
         while (!visited.empty()){
            TreeNode* current = visited.top();
            visited.pop();
            // process only left nodes
            if (leftNodes[current]==-1){
                // check no children
                if (current->left == nullptr && current->right == nullptr) 
                    sum+=current->val;
            };

            if (current->left != nullptr) {
                visited.push(current->left);
                leftNodes[current->left]=-1;
            };
            if (current->right != nullptr){
                visited.push(current->right);
                leftNodes[current->right]=+1;
            };

         };
         return sum;
    }
};