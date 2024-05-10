#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      auto f = [](const auto x) { return x*x;};
        vector<int> res;
  
         transform(nums.begin(), nums.end(),
         back_inserter(res), f);
         ranges::sort(res);
         return res;   
    }
};