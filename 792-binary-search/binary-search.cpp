// Solution with binary search
#include <vector>
using namespace std;
class Solution {
public:
   int search(vector<int> &nums, int target) {
  if (nums.size() == 0)
    return -1;
  if (target < nums.at(0))
    return -1;
  if (target > nums.at(nums.size() - 1))
    return -1;
  int left = 0;
  int right = nums.size() - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (target == nums.at(mid))
      return mid;
    if (target > nums.at(mid)) {
      left = mid + 1;
    } else if (target < nums.at(mid)) {
      right = mid - 1;
    };
  };
  return -1;
}
};