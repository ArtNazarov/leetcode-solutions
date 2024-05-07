/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <set>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
       unordered_map<ListNode*, int> m;
       ListNode* p = head;
       if (p!=nullptr){
          if (p->next == p) return true;
       };
       while (p!=nullptr){
            if (m[p] == 1 && !m.empty()) { return true; }
            else { m[p]++; };
            p = p->next;
       };
       return false;
    }
};