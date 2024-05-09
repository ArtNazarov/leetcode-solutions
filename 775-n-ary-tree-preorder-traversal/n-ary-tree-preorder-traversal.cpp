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
        if (root != nullptr) recurs(root, res);
        return res; 
    }

    void recurs(Node* node, vector<int>& res) {
        res.insert(res.end(), node->val);
        for (Node* child : node->children)
            recurs(child, res);
    }

};