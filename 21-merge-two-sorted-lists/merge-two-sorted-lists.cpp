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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        std::pair<ListNode*, ListNode*> list = make_pair(nullptr, nullptr);
        ListNode* a = list1;
        ListNode* b = list2;
        
        while (a != nullptr && b != nullptr){
            if (a->val < b->val) {
                insertToLinkedList(list, a->val);
                a = a->next;
            } else if (a->val == b->val) {
                insertToLinkedList(list, a->val);
                a = a->next;
                insertToLinkedList(list, b->val);
                b = b->next;
            }
            else {
                insertToLinkedList(list, b->val);
                b = b->next;
            };
        };

        if (a == nullptr && b != nullptr){
            while (b != nullptr){
                insertToLinkedList(list, b->val);
                b = b->next;
            };
        } else
        if (a != nullptr && b == nullptr){
            while (a != nullptr){
                insertToLinkedList(list, a->val);
                a = a->next;
            };
        };
        return list.first;
    }
    ListNode* makeList(const vector<int>& v){
    std::pair<ListNode*, ListNode*> list;
    for (auto e : v){
        insertToLinkedList(list, e);
    };
    return list.first;
}
/*
  void print_list(ListNode* lst){
    ListNode* cur = lst;
    while (cur != nullptr){
        cout << cur->val << " ";
        cur = cur->next;
    };
    cout << endl;
  }
  
  void clear_memory(ListNode* lst){
    ListNode* cur = lst;
    while (cur != nullptr){
        ListNode* nxtElem = cur->next;
        cur->next = nullptr;
        delete cur;
        cur = nxtElem;
    };
  }
  */
};