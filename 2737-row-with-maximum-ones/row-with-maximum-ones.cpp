#include <vector>
using namespace std;
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rowNum = -1;
        int maxOnes = INT_MIN;
        int index = -1;
        for (auto v : mat){
            index++;
            sort(v.begin(), v.end());
            if (*(v.end()-1)<1) continue;
            auto lw = lower_bound(v.begin(), v.end(), 1);
            auto up = upper_bound(v.begin(), v.end(), 1);
            int ones = up - lw;
            if (ones > maxOnes){
                maxOnes = ones;
                rowNum = index;
            };
        };
        if (rowNum == -1 && maxOnes == INT_MIN) {
            rowNum = 0;
            maxOnes = 0;
        };
        vector<int> res = {rowNum, maxOnes};
        return res;
    }
};