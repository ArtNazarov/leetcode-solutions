#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> f;
        int max_freq = 0;
        for (auto e: nums) {f[e]++; if (max_freq < f[e]) max_freq = f[e];};
        int total_freq = 0;
        for (auto p : f) if (p.second == max_freq) total_freq += p.second;
        return total_freq;
    }
};