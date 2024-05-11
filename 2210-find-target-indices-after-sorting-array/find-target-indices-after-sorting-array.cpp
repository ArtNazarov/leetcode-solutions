#include <vector>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       sort(nums.begin(), nums.end());
       
       auto flag = binary_search(nums.begin(), nums.end(), target);
       vector<int> v = {};
       if (!flag){
        return v;
       };
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        auto it2 = upper_bound(nums.begin(), nums.end(), target);
        for(auto it = it1;it!=it2;it++){
            v.push_back(it - nums.begin());
        };
        return v;
    }
};