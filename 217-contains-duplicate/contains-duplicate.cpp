#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         int sz = nums.size();
         ranges::sort(nums.begin(), nums.end());
         nums.erase(unique(nums.begin(), nums.end()), nums.end());
         return sz > nums.size();
    }
};