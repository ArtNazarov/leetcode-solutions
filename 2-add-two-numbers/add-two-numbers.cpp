
class Solution {
public:
  
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    // auto r1 = reverseList(l1);
    // auto r2 = reverseList(l2);
    // current item in list1
    auto cur1 = l1;
    // current item in list2
    auto cur2 = l2;
    // current shift, e.g. 9+9 shift == 1
    int shift = 0;
    // top of result linked list
    ListNode *top = nullptr;
    // current item of result linked list, last elem
    ListNode *cur = nullptr;
    // while both lists is not empty
    while (cur1 != nullptr and cur2 != nullptr) {
      // compute current digit
      int dig = (shift + cur1->val + cur2->val) % 10;
      // compute shift value
      shift = (shift + cur1->val + cur2->val) / 10;
      // if first element of result
      if (top == nullptr) {
        top = new ListNode(dig);
        cur = top;
      }
      // if not first element of result
      else {
        // insert next digit to last
        auto nxt = new ListNode(dig);
        cur->next = nxt;
        cur = nxt;
      };
      cur1 = cur1->next;
      cur2 = cur2->next;
    };
    // two cases: second list empty, first not empty
    if (cur2 == nullptr and cur1 != nullptr) {
      // for rest of l1 list
      while (cur1 != nullptr) {
        // compute next digit
        int dig = (shift + cur1->val) % 10;

        // compute next shift
        shift = (cur1->val + shift) / 10;
        cur1 = cur1->next;
        ListNode *nxt = new ListNode(dig);
        cur->next = nxt;
        cur = nxt;
        if (cur1 == nullptr)
          break;
      };

    } else if (cur1 == nullptr and cur2 != nullptr) {
      // if first list empty and second not empty

      // while second list not empty
      while (cur2 != nullptr) {
        // compute next digit
        int dig = (shift + cur2->val) % 10;

        // compute shift
        shift = (cur2->val + shift) / 10;
        cur2 = cur2->next;
        ListNode *nxt = new ListNode(dig);
        cur->next = nxt;
        cur = nxt;
      };
    };
    // cout << shift << endl;
    // if shift not 0, add to result
    ListNode *nxt = nullptr;
    if (shift != 0) {
      nxt = new ListNode(shift);
    }
    // at each step cur is end of result list
    cur->next = nxt;
    // return pointer to top(first) element
    // clear_memory(r1);
    // clear_memory(r2);
    return top;
  }
};
