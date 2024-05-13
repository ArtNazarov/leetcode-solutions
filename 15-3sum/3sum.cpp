#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <ranges>

class Solution {
public:
 

vector<vector<int>> threeSum(vector<int> &nums) {
 
  const int sz = nums.size();
  vector<vector<int>> res = {};
  ranges::sort(nums);
  int i = 0;
  while (i < sz - 2){
    if (nums[i]>0) break;
    if (i>0 && nums[i]==nums[i-1]) {
        i = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();
        continue;
    };
    int leftBorder = i + 1;
    int rightBorder = sz - 1;
    while (leftBorder < rightBorder){
        
        int sum = nums[i] + nums[leftBorder] + nums[rightBorder];
        
        if (sum < 0) {
            
            leftBorder ++;
        }
        else if (sum > 0){
            rightBorder --;
        }
        else {
           
             
      
           
            res.insert(res.end(), {nums[i], nums[leftBorder], nums[rightBorder]});
            leftBorder = upper_bound(nums.begin(), nums.end(), nums[leftBorder]) - nums.begin();
            rightBorder = prev(lower_bound(nums.begin(), nums.end(), nums[rightBorder])) - nums.begin();
        
        };
    };
    i++;
  };
    
 
   
  return res;
}
};