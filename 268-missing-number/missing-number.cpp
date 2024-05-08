#include <vector>
#include <algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = 0;
        for(auto x : nums) s+=x;
        int aw = (nums.size() * (nums.size() + 1)) >> 1;
        return aw - s;
    }
};