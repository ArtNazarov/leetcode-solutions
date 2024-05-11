#include <unordered_map>
using namespace std;
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt  = 0;
        unordered_map<string, int> sh = {{"type", 0},{"color", 1}, {"name", 2}};
        for (auto v : items){
            string val = v[sh[ruleKey]];
            if (val == ruleValue) cnt++;
        };
        return cnt;
    }
};