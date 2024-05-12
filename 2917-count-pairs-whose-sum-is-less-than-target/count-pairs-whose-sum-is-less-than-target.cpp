#include <vector>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        sort(nums.begin(), nums.end());
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i]>target && target > 0) break;
            for (int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j]>target) break;
                if (nums[i]+nums[j]<target) cnt++;
            };
        };
        return cnt; 
    }
};