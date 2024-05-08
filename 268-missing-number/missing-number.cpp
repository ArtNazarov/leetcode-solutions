#include <vector>
#include <algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();
        sort(nums.begin(), nums.end());
        auto start = nums.begin();
        auto end = nums.end();
        for (int x = 0; x <= sz ; x++){
            if (!binary_search(start, end, x)) return x;
        };
        return 0;
    }
};