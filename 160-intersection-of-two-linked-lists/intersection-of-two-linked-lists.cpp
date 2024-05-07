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
      vector<ListNode*> nodesInA;
           ListNode* p = headA;
           while (p!=nullptr){
               nodesInA.push_back(p);
               p = p->next;
          };
          p = headB;
          while (p !=nullptr){
              if (lower_bound(nodesInA.begin(), nodesInA.end(), p)!=nodesInA.end()){
                  return p;
            };
            p = p->next;
        };
        return nullptr;
    }
};