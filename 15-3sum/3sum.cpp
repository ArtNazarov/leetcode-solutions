#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

class Solution {
public:
 

vector<vector<int>> threeSum(vector<int> &nums) {
  // map<vector<int>, int> f;
  
  vector<vector<int>> res = {};
  std::sort(nums.begin(), nums.end());
  
  
   
  int sz = nums.size();
  for (size_t i = 0; i < sz - 2; i++) {
    if (nums[i]>0) break;
    if (i>0 && nums[i]==nums[i-1]) continue;
    int leftBorder = i + 1;
    int rightBorder = sz-1;
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
            //f[v]++;
            //if (f[v]==1) 
            res.insert(res.end(), v);
            leftBorder = upper_bound(nums.begin(), nums.end(), nums[leftBorder]) - nums.begin();
            rightBorder = prev(lower_bound(nums.begin(), nums.end(), nums[rightBorder])) - nums.begin();
        
        };
    };

  };
    
 
  // clear_duplicates(res);
  return res;
}
};