#include <vector>
using namespace std;
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int, int> f;
        for(int i=0;i<nums.size()-1;i++){
            if (nums[i]==key){
                f[nums[i+1]]++;
            };
        };
        int x = INT_MIN;
        int mx = INT_MIN;
        for (auto p : f) {
            mx = max(mx, p.second);
            if (mx == p.second) x = p.first;
            //if (x != INT_MIN) break;
        };
        return x;
    }
};