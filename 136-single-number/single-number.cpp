#include <vector>
#include <algorithm>
 class Solution {
public:
    int singleNumber(vector<int>& nums) {
      std::vector<int> x(nums.begin(), nums.end());
      std::map<int, int> m;
      ranges::sort(x);

      for (size_t i=0;i<x.size();i++){
          ++m[x[i]]; // compute frequency
      };

      std::vector<std::pair<int, int>> f(m.begin(), m.end());
      std::sort(f.begin(), f.end(), [](auto &l, auto& r) {
        return l.second  < r.second;
      });
      return f[0].first;
    }

};