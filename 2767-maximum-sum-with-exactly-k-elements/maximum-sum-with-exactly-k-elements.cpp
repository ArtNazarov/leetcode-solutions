#include <vector>
using namespace std;
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int mx = nums[nums.size()-1];
        nums.erase(nums.end()-1, nums.end());
        int s = 0;
        for (int i=1;i<=k;i++){
            s+=mx;
            mx+=1;
           // cout << s << endl;
           // cout << mx << endl;
        }
        return s; 
    }
};