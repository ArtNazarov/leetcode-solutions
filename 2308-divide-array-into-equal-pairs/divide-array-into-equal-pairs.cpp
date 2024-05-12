#include <vector>
using namespace std;
class Solution {
public:
    bool divideArray(vector<int>& nums) {
      if (nums.size() % 2 != 0) return false;
      map<int, int> f;
      for(auto x : nums) f[x]++;
      int v = f[nums[0]];
      for(auto p : f){
        if (p.second % 2 != 0) return false;
      };
      return true;
    }
};