#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        unordered_map<int, int> f;
        // randomized
        while (nums.size()>0){
            int index = rand() % nums.size();
            f[nums[index]] ++ ;
            if (f[nums[index]]> 2) return false;
            nums.erase(nums.begin()+index);
        };
        return true; 
    }
};