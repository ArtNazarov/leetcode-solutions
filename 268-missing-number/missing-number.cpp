#include <vector>
#include <algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();
        sort(nums.begin(), nums.end());
        for (int x = 0; x <= sz / 2 ; x++){
            if (!binary_search( nums.begin(),  nums.end(), x)) return x;
            if (!binary_search( nums.begin(),  nums.end(), sz-x)) return sz-x;
        };
        return 0;
    }
};