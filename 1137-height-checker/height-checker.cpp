#include <vector>
#include <algorithm>
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> p = heights;
        ranges::sort(p);
        int s = 0;
        for (size_t i = 0; i < heights.size(); i++){
            if (p[i] != heights[i]) s++;
        }
        return s; 
    }
};