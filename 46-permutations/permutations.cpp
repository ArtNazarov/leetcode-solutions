#include <vector>
#include <algorithm>
#include <ranges>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> m;
        vector<int> v;
        ranges::sort(nums);
        do{
            v.clear();
            copy(nums.begin(),nums.end(), back_inserter(v));
            m.push_back(v);
        }  while (next_permutation(nums.begin(), nums.end()));
        return m;
    }
};