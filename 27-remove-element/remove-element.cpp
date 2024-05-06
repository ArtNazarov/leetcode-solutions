#include <vector>
#include <algorithm>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      // get all numbers not equals val
      vector<int> notEquals;
       std::copy_if (
                nums.begin(), 
                nums.end(), 
                std::back_inserter(notEquals), 
                [ = ](int i){return i!=val;} );  
       
      int result = notEquals.size(); 
      // changing first numbers to notEquals
      for (int i=0;i<result;i++){
        nums[i] = notEquals[i];
      };
      return result;
    }
};