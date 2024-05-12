#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> inter;
        if (nums.size()==0) return inter;
        copy(nums[0].begin(), nums[0].end(), back_inserter(inter));
        sort(inter.begin(), inter.end());
        int sz = nums.size();
        vector<int> t;
        for (int i=1; i<sz; i++){
           copy(inter.begin(), inter.end(), back_inserter(t)); 
           sort(nums[i].begin(), nums[i].end());
           inter.clear();
           set_intersection(
                t.begin(), t.end(),
                nums[i].begin(), nums[i].end(),
                back_inserter(inter));
         
           t.clear(); 
        };
        return inter;
    }
};