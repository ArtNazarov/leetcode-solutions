#include <vector>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = INT_MIN;
        for (auto v : accounts){
            int s = 0;
            for (auto x : v){
                s += x;
            };
            mx = max(mx, s);
        };

        return mx;
    }
};