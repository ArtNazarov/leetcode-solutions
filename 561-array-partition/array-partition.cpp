// Using ranges
#include <ranges>
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      int s = 0;
      int sz = nums.size();
      ranges::sort(nums);
      for(int i=0; i<sz; i+=2) s+=nums[i];
      return s;   
    }
};