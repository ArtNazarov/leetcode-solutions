#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

class Solution {
public:
 
void clear_duplicates(vector<vector<int>> &v) {
  std::sort(v.begin(), v.end());
  auto last = std::unique(v.begin(), v.end());
  v.erase(last, v.end());
}

vector<vector<int>> threeSum(vector<int> &nums) {
  map<vector<int>, int> f;
  
  vector<vector<int>> res = {};
  std::sort(nums.begin(), nums.end());
  
  size_t zeroes = std::count(nums.begin(), nums.end(), 0);
  if (zeroes == nums.size()){
    return {{0,0,0}};
  };
   
  set<int> sums;
  for (size_t i = 0; i < nums.size()-2; i++) {
    int leftBorder = i + 1;
    int rightBorder = nums.size()-1;
    while (leftBorder < rightBorder){
        
        int sum = nums[i] + nums[leftBorder] + nums[rightBorder];
        
        if (sum < 0) {
            leftBorder ++;
        }
        else if (sum > 0){
            rightBorder --;
        }
        else {
           
             
            vector<int> v = {nums[i], nums[leftBorder], nums[rightBorder]};
            f[v]++;
            if (f[v]==1) res.push_back(v);
            leftBorder ++;
            rightBorder --;
        };
    };

  };
    
 
  // clear_duplicates(res);
  return res;
}
};