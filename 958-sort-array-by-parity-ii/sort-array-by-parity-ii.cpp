#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> evens;
        vector<int> odds;
        for (auto e : nums){
            if (e % 2 == 0) {
                evens.push_back(e);
            } else {
                odds.push_back(e);
            };
        };
        vector<int> res;
        auto it = odds.begin();
        for (auto e : evens) {
            res.push_back(e);
            res.push_back(*it);
            if (it != odds.end()) it++;
        };
        return res;
         
    }
};