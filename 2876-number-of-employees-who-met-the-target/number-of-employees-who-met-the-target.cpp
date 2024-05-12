#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
     
        sort(hours.begin(), hours.end());
 
        auto itU = upper_bound(hours.begin(), hours.end(), target);
        auto itE = lower_bound(hours.begin(), hours.end(), target);
        int eq = itU - itE;
        int up = hours.end()-itU;
        int counter = eq + up;
        return counter;
    }
};