// Using lambda
#include <vector>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size()<=2) return true;
        auto checkM = [](int v1, int v2, bool greater){
            if (greater) { return v1 >= v2; };  return v1 <= v2;
        };
        int i = 1;
        while (i<nums.size()-1 && nums[i]==nums[i-1]){
               i++;
        };

        bool greater = nums[i-1] >= nums[i];
        bool mono = true;
        for (int i=0;i<nums.size()-1;i++){
            mono = mono && checkM(nums[i], nums[i+1], greater);
            if (!mono) break;
        };
        return mono;  
    }
};