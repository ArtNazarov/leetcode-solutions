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
  
    ListNode* reverseList(ListNode* head) {
        ListNode* ptr = head;
        stack<int> st;
        while (ptr != nullptr){
            st.push(ptr->val);
            ptr = ptr->next;
        };
        ListNode* res = nullptr;
        ListNode* head_res = nullptr;
        while (!st.empty()){
            //cout << st.top() << endl;
            
            if (res == nullptr) {
                head_res = new ListNode(st.top());
                res = head_res;
            } else {
                res->next = new ListNode(st.top());
                res = res->next;
            };
            st.pop();
        }
        return head_res; 
     }
};