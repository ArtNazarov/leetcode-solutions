#include <vector>
#include <map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, deque<int>> f;
        int level = nums.size() / 2;
        int result = -1;

        for (const auto& e : nums){
            f[e].push_front(e);
            if (f[e].size()>level){
                result = e;
                break;
            }
        };
        
          
        return result;
    }
};