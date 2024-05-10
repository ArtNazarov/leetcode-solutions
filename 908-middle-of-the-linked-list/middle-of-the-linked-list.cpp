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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int counter = 0;
        while (current!=nullptr) { counter++; current = current->next; };
        current = head;
        
        if (counter % 2 == 0 && counter != 0)
         { counter = (counter >> 1) + 1; 
            for (int i=1;i<counter;i++){
                current = current->next;
            };
         
         
         } else { counter/=2;
         for (int i=1;i<=counter;i++){
            current = current->next;
        };
        
          };
        return current;
    }
};