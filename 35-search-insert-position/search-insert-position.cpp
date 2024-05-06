#include <algorithm>
#include <vector>
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      
      return  abs(nums.begin() - std::lower_bound(nums.begin(),
                nums.end(), target));

    }
};