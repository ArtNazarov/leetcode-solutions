#include <vector>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        ranges::sort(nums.begin(), nums.end());
        int i = 0;
        int sz = nums.size();
        while (i < sz){
            int start = i;
            while (i < (sz-1) && ((long long)nums[i+1]-(long long)nums[i]==1LL)) i++;
            if (nums[start]==nums[i]) {
                res.push_back(to_string(nums[start]));
            } else {
            res.push_back( to_string(nums[start])+"->"+to_string(nums[i]));
            };
            i++;
        };
        return res;
    }
};