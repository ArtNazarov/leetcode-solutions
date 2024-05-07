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
 #include <deque>
 using namespace std;
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
            vector<int> res;
            if (root == nullptr) return res;
        
            deque<TreeNode*> visited;
            deque<TreeNode*> traversal;
            visited.push_front(root);

            while (!visited.empty()) {
                TreeNode* current = visited.front();
                visited.pop_front();
                traversal.push_front(current);

                if (current->left) visited.push_front(current->left);
                if (current->right) visited.push_front(current->right);
            };

            while (!traversal.empty()) {
                res.push_back( traversal.front()->val );
                traversal.pop_front();
            };
                return res;
    }
};