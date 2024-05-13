#include <vector>
using namespace std;

class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int  cnt = 0;
        for (auto x : nums) {
            if (x % 2 == 0) cnt++;
            if (cnt >=2) return true;
        };
        return false;

    }
};