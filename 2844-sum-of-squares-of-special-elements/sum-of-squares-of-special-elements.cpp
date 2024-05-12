#include <vector>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int index = 1;
        const int sz = nums.size();
        for (auto x : nums) {
             if (sz % index  == 0) sum+=x*x;
             index++;
        };
        return sum;
    }
};