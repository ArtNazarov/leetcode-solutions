#include <vector>
#include <map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> f;
        int level = nums.size() / 2;
        int result = -1;

        for (const auto& e : nums){
            ++f[e];
            if (f[e]>level){
                result = e;
                break;
            }
        };
        
          
        return result;
    }
};