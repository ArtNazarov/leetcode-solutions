#include <vector>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int sz = nums.size();
        sort(nums.begin(), nums.end());
        int index = 0;
        while ( index < sz) {
            if (nums[index]>=0) break;
            int val = nums[index];
            bool flag = binary_search(nums.begin(), nums.end(), - val);
            if (flag) return -val;
            index ++;
        };
        return -1;
    }
};