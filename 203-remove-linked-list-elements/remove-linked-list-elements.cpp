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
    ListNode* removeElements(ListNode* head, int val) {
            ListNode* filtered = nullptr;
            ListNode* insertionPoint = nullptr;
            auto p = head;
            while (p!=nullptr){
                if (p->val != val) {
                    auto newNode = new ListNode(p->val);
                    if (filtered == nullptr) {
                        filtered = newNode;
                        insertionPoint = filtered;
                    } else {
                        insertionPoint->next = newNode;
                        insertionPoint = newNode;
                    };
                };
            p = p->next;
                };
             

            return filtered;
    }
};