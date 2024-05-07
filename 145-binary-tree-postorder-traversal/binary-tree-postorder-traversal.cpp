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
 #include <vector>
 #include <stack>
 using namespace std;
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
            vector<int> res;
            if (root == nullptr) return res;
        
            stack<TreeNode*> visited;
            stack<TreeNode*> traversal;
            visited.push(root);

            while (!visited.empty()) {
                TreeNode* current = visited.top();
                visited.pop();
                traversal.push(current);

                if (current->left) visited.push(current->left);
                if (current->right) visited.push(current->right);
            };

            while (!traversal.empty()) {
                res.insert( res.end(), traversal.top()->val );
                traversal.pop();
            };
                return res;
    }
};