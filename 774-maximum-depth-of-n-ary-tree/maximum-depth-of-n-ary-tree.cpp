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
// Iteration using deque
class Solution {
public:
    int maxDepth(Node* root) {
        if (root==nullptr) return 0;
        if (root->children.empty()) return 1;
        deque<Node*> st;
        st.push_front(root);
        int mx = 0;
        while (!st.empty()){
            Node* current = st.front();
            st.pop_front();
            for (auto x : current->children){
                mx = max(mx, maxDepth(x));
            };
        }
        return 1 + mx;
    }
};