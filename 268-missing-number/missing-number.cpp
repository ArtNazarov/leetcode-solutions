#include <vector>
#include <algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();
        sort(nums.begin(), nums.end());
        auto start = nums.begin();
        auto end = nums.end();
        for (int x = 0; x <= sz / 2 ; x++){
             
            if (!binary_search(start, end, x)) return x;
            if (!binary_search(start, end, sz-x)) return sz-x;
            int r = rand() % (sz - r);
            if (!binary_search(start, end, r)) return r;
            if (!binary_search(start, end, sz-r)) return sz-r;
          
        };
        return 0;
    }
};