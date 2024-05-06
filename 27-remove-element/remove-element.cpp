#include <vector>
#include <algorithm>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      // get all numbers not equals val
      vector<int> v = nums;
      vector<int> notEq;
      sort(v.begin(), v.end());
      auto lw = lower_bound(v.begin(), v.end(), val);
      auto up = upper_bound(v.begin(), v.end(), val);
      for(auto it = v.begin(); it != lw; it++){
        notEq.push_back(*it);
      };
      for(auto it = up; it != v.end(); it++){
        notEq.push_back(*it);
      };
      int sz = notEq.size();
      for(auto i=0;i<sz;i++) nums[i] = notEq[i];
      return sz; 
    }
};