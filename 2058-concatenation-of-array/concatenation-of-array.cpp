#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        copy(nums.begin(), nums.end(), back_inserter(v));
        copy(nums.begin(), nums.end(), back_inserter(v));
        return v;    
    }
};