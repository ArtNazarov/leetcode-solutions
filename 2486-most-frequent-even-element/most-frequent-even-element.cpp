#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int, int> f;
        int mx = INT_MIN;
        int cnt = 0;
        for(auto x : nums){
            if (x % 2 == 0) { 
                f[x]++; 
                cnt++;
                mx = max(mx, f[x]); 
            };
        };
        if (cnt == 0) return -1;
        map<int, vector<int>> fi;
        for(auto p : f){
            fi[p.second].push_back(p.first);
        }
        auto p = prev(fi.end());
        return (*p).second[0];
    }
};