#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

class Solution {
public:
  

vector<vector<int>> threeSum(vector<int> &nums) {
  map<vector<int>, int> f;
  
  vector<vector<int>> res = {};
  std::sort(nums.begin(), nums.end());
  
  size_t zeroes = std::count(nums.begin(), nums.end(), 0);
  if (zeroes == nums.size()){
    return {{0,0,0}};
  };
   
   int sz =  nums.size();
  set<int> sums;
  for (size_t i = 0; i < sz-2; i++) {
    int leftBorder = i + 1;
    int rightBorder = sz-1;
    while (leftBorder < rightBorder){
        
        int sum = nums[i] + nums[leftBorder] + nums[rightBorder];
        
        if (sum < 0) {
            while (leftBorder < rightBorder && nums[i] + nums[leftBorder] + nums[rightBorder]<0) leftBorder ++;
        }
        else if (sum > 0){
             while (leftBorder < rightBorder && nums[i] + nums[leftBorder] + nums[rightBorder]>0) rightBorder --;
       
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