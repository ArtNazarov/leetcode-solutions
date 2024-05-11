#include <vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s = 0;
        for (auto &elem : nums){
            elem = elem + s;
            s = elem;
        };
        return nums;  
    }
};