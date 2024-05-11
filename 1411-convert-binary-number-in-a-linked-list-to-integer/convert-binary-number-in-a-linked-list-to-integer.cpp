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
// Using deque
#include <deque>
using namespace std;
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       if (head == nullptr) return 0;
       deque<ListNode*> visited;
       visited.push_front(head);
       int res = 0;
       ListNode* current;
       while (!visited.empty()){
            current = visited.front();
            visited.pop_front();
            int digit = current->val;
            res = res * 2 + digit;
            if (current->next !=nullptr) visited.push_front(current->next);
       };
       return res;
    }
};