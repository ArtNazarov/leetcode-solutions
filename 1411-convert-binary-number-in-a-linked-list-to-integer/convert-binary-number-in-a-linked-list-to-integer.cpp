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

// Solution using stack
#include <stack>
using namespace std;
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       if (head == nullptr) return 0;
       stack<ListNode*> visited;
       visited.push(head);
       int res = 0;
       ListNode* current;
       while (!visited.empty()){
            current = visited.top();
            visited.pop();
            int digit = current->val;
            res = res * 2 + digit;
            if (current->next !=nullptr) visited.push(current->next);
       };
       return res;
    }
};