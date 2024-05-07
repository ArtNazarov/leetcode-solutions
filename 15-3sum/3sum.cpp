#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

class Solution {
public:
 

vector<vector<int>> threeSum(vector<int> &nums) {
 
  
  vector<vector<int>> res = {};
  ranges::sort(nums);
  
  
   
  
  for (size_t i = 0; i < nums.size()-2; i++) {
    if (nums[i]>0) break;
    if (i>0 && nums[i]==nums[i-1]) continue;
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
           
            res.insert(res.end(), v);
            leftBorder = upper_bound(nums.begin(), nums.end(), nums[leftBorder]) - nums.begin();
            rightBorder = prev(lower_bound(nums.begin(), nums.end(), nums[rightBorder])) - nums.begin();
        
        };
    };

  };
    
 
   
  return res;
}
};