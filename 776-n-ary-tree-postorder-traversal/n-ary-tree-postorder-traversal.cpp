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
    vector<int> postorder(Node* root) {
        // Solution with stack traverse
        vector<int> res;
         if (root==nullptr) return res;
        stack<Node*> st;
        st.push(root);
        while (!st.empty()){
            Node* n = st.top(); st.pop();
            
            for (Node* child : n->children){
                st.push(child);
            };
            res.push_back(n->val);
        };
        reverse(res.begin(), res.end());
        return res;
    }
};