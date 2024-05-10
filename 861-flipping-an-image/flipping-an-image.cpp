#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& r : image){
            ranges::reverse(r);
            for (auto& e : r) e = 1 - e;
        };
        return image;    
    }
};