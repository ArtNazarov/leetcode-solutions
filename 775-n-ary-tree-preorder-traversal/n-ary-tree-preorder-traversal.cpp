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
        queue<int> q;
        vector<int> res;
        if (root != nullptr) recurs(root, q);
        while (!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        return res; 
    }

    void recurs(Node* node, queue<int>& q) {
        q.push(node->val);
        for (Node* child : node->children)
            recurs(child, q);
    }

};