#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int sz = matrix.size();
 vector<int> cpy;
        vector<int> pattern;
        for (int k=1;k<=sz;k++) pattern.push_back(k);
        // test rows
        for (int i=0;i<sz;i++){
            cpy.clear();
            copy(matrix[i].begin(), matrix[i].end(), back_inserter(cpy));
            ranges::sort(cpy);
            if (cpy!=pattern) return false;
        };

        for (int j=0;j<sz;j++){
            cpy.clear();
            for (int i=0;i<sz;i++) cpy.push_back(matrix[i][j]);
            ranges::sort(cpy);
            if (cpy != pattern) { return false; };
        };
        return true;
    }
};