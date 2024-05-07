/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <set>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      unordered_map<ListNode*, int> nodesInA;
           ListNode* p = headA;
           while (p!=nullptr){
               nodesInA[p]++;
               p = p->next;
          };
          p = headB;
          while (p !=nullptr){
              nodesInA[p]++;
              if (nodesInA[p]>1){
                  return p;
            };
            p = p->next;
        };
        return nullptr;
    }
};