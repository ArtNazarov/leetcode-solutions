#include <vector>
#include <algorithm>
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto p = head;
        auto top = head;
        vector<ListNode*> v;
        while (p!=nullptr) {v.push_back(p); p=p->next;};
        reverse(v.begin(), v.end());
        //cout << "Vertex count " << v.size() << endl;
        int index = n - 1;
        //cout << "try to remove index " << index << endl;
        ListNode* deleted;
        int sz_before_del = v.size();
        if (index>=0 && index < sz_before_del) deleted = v[index];
        //cout << deleted->val << endl;
       deleted->next = nullptr;
       int prev = index+1;
       int next = index-1;
       int sz = v.size();
       //cout << "size " << sz << endl;
       //cout << "prev" << prev << endl;
       //cout << "next" << next << endl;
       if (prev == sz && next >= 0 && next < sz ){
            // cout << "if first element deleted" << endl;
            top = v[next];
    } else
       if ( next == -1)
       {
           //cout << "if last element deleted" << endl;
           if (v.size()!=1) v[prev]->next = nullptr; else top = nullptr;
    } else  {
        //cout << "middle element deleted" << endl;
        v[prev]->next = v[next];
    };
       delete deleted;
        return top;
    }
};