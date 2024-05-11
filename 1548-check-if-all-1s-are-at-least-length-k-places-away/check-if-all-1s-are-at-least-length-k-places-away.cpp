// using vector
#include <vector>
using namespace std;
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
       vector<int> ps;
       for(auto i=0;i<nums.size();i++) {
        if (nums[i]==1) ps.push_back(i);
       };
       for (auto p=1; p<ps.size();p++){
        if (ps[p]-ps[p-1]<=k) return false;
       };
       return true;
    }
};