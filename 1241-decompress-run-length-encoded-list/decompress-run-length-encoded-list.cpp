
#include <algorithm>
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        vector<int> buf;
        size_t index = 0;
        size_t sz = nums.size();
        while (index < sz) {
            int f = nums[index];
            int v = nums[index+1];
            index+=2;
            buf.clear();
            buf.resize(f);
            fill(buf.begin(), buf.end(), v);
            copy(buf.begin(), buf.end(), back_inserter(res));
        };
        return res;
    }
};