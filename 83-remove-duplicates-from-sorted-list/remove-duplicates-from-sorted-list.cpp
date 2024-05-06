/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 ListNode* makeList(const vector<int>& v){
    std::pair<ListNode*, ListNode*> list;
    for (auto e : v){
        insertToLinkedList(list, e);
    };
    return list.first;
}
void insertToLinkedList(std::pair<ListNode*, ListNode*>& list, int val){
                // cout << "Insert " << val << endl;
                ListNode* nxtNode = new ListNode(val);
                if (list.first == nullptr){
                    list.first = nxtNode;
                    list.second = nxtNode;
                    return;
                };
                list.second = list.first;
                 
                 while (list.second->next != nullptr) {
                    list.second = list.second->next;
                };
                 
                
                list.second->next = nxtNode; 
                
                
    }
     ListNode* deleteDuplicates(ListNode* head) {
        set<int> s;
        ListNode* current = head;
        while (current != nullptr){
            s.insert(current->val);
            current = current->next;
        };
        vector<int> v;
        for (auto val : s){
            v.insert(v.end(), val);
        };
        return makeList(v);
    }
};