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
    ListNode* makeList(const vector<int>& v){
    std::pair<ListNode*, ListNode*> list;
    for (auto e : v){
        insertToLinkedList(list, e);
    };
    return list.first;
}
   
   void insertToLinkedList(std::pair<ListNode*, ListNode*>& list, int val){
                // cout << "Insert " << val << endl;
                ListNode* nxtNode = new ListNode(val);
                if (list.first == nullptr){
                    list.first = nxtNode;
                    list.second = nxtNode;
                    return;
                };
                list.second = list.first;
                 
                 while (list.second->next != nullptr) {
                    list.second = list.second->next;
                };
                 
                
                list.second->next = nxtNode; 
                
                
    }

    vector<int> makeVector(ListNode* lst){
        vector<int> v;
        ListNode* current = lst;
        while (current != nullptr){
            v.push_back(current->val);
            current = current->next;
        }
        return v;
    }
 
    ListNode* reverseList(ListNode* head) {
        vector<int> v = makeVector(head);
        vector<int> rev;
        ranges::copy(v.rbegin(), v.rend(), back_inserter(rev));
        return makeList(rev);
    }
};