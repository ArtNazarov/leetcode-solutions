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
        
        deque<int> q;
        vector<int> res;
        if (root != nullptr) recurs(root, q);
        while (!q.empty()){
            res.push_back(q.front());
            q.pop_front();
        }
        return res; 
    }

    void recurs(Node* node, deque<int>& q) {
        q.push_back(node->val);
        for (Node* child : node->children)
            recurs(child, q);
    }

};
