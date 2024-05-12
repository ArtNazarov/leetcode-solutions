#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int, int> f;
        for(auto x : nums) f[x]++;
        int cnt = 0;
        for(auto p : f){
            cnt += p.second / 2;
        };
        cnt*=2;
        int x = nums.size() - cnt;
        vector<int> v = {cnt / 2, x};
        return v;
    }
};