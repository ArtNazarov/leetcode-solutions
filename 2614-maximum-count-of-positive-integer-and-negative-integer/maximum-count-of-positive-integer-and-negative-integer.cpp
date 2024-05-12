#include <vector>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        map<int, int> f;
        for(auto x : nums){
            if (x>0) 
                { f[1]++; }
            else if (x < 0) {
                f[-1]++; 
            };
        };
        return max(f[1], f[-1]);
    }
};