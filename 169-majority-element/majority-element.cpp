#include <vector>
#include <map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, vector<int>> f;
        int level = nums.size() / 2;
        int result = -1;

        for (const auto& e : nums){
            f[e].push_back(e);
            if (f[e].size()>level){
                result = e;
                break;
            }
        };
        
          
        return result;
    }
};