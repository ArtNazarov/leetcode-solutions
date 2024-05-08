#include <vector>
#include <ranges>
#include <algorithm>
class Solution {
public:
    int thirdMax(vector<int>& nums) {
            ranges::sort(nums);
            nums.erase(unique(nums.begin(), nums.end()), nums.end());
            size_t n = nums.size();
            if (n >= 3) {
                return nums[n - 3];
            };
            if (n == 2) return nums[1];
            return nums[0];
    }
};