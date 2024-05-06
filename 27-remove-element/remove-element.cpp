#include <vector>
#include <algorithm>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      // get all numbers not equals val
      list<int> notEquals;
       std::copy_if (
                nums.begin(), 
                nums.end(), 
                std::front_inserter(notEquals), 
                [=](int i){return i!=val;} );  
       
      int result = notEquals.size(); 
      // changing first numbers to notEquals
      auto p = notEquals.begin();
      int i = 0;
      while (p!=notEquals.end()){
        nums[i] = *p;
        p++;
        i++;
      };
      return result;
    }
};