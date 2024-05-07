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
       unordered_set<ListNode*> st;
       ListNode* p = head;
       if (p!=nullptr){
          if (p->next == p) return true;
       };
       while (p!=nullptr){
            if (st.find(p)!=st.end() && !st.empty()) { return true; }
            else { st.insert(p); };
            p = p->next;
       };
       return false;
    }
};