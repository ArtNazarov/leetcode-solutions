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
            
            int r = rand() % (sz+1);
           
            if (!binary_search(start, end, r)) return r;
            
          
        };
        return 0;
    }
};