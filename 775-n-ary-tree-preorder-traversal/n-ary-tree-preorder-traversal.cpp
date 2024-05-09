/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    vector<int> preorder(Node* root) {
        // Traverse without stack
        vector<int> res;
        if (root == nullptr) return res;
        if (root->children.empty()){
            // cout << "Empty tree or subtree with val  " << root->val << endl;
            res.push_back(root->val);
            return res;
        };
        res.push_back(root->val);
        for (auto e : root->children){
          
            for (auto q : preorder(e)){
                res.push_back(q);
            };
        };

        return res; 
    }
};