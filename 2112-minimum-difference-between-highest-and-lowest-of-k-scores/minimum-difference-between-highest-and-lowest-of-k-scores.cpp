#include <limits.h>
#include <vector>
#include <algorithm>
#include <ranges>
using namespace std;

 

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        ranges::sort(nums);
        int min_diff = INT_MAX;
        size_t left = 0;
        size_t right = k - 1;
        size_t sz = nums.size();
        while (right < sz) {
            min_diff = min(min_diff, nums[right] - nums[left]);
            left += 1;
            right += 1;
        }
        return min_diff;  
    }
};