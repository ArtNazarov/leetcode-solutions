#include <cmath>
class Solution {
public:
    int averageValue(vector<int>& nums) {
      int sum = 0;
      int cnt = 0;
      for (auto e : nums){
        if (e % 6 == 0 && e > 0) { sum +=e; cnt++; };
      };
        if (cnt == 0) return 0;
        return floor(1.0 * (float)sum/cnt);
    }
};