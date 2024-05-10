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
    int findSecondMinimumValue(TreeNode* root) {
       vector<int> v;
       stack<TreeNode*> st;
       st.push(root);
       while (!st.empty()){
        TreeNode* n = st.top(); st.pop();
        if (n->left != nullptr) st.push(n->left);
        if (n->right != nullptr) st.push(n->right);
        v.push_back(n->val);
        
       
        
       } ;
       ranges::sort(v);
       v.erase(unique(v.begin(), v.end()), v.end());
       if (v.size()>=2) return v[1]; 
       
       return -1;
    }
};