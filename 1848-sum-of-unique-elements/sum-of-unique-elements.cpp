#include <vector>
using namespace std;
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int s = 0;
       
        sort(nums.begin(), nums.end());
         for (auto x : nums){ cout << x << " "; }; cout << endl;
        for (int i=0;i<nums.size();i++){
            int prev = INT_MIN;
            int next = INT_MAX;
            if (i>0) prev = nums[i-1];
            if (i<nums.size()-1) next = nums[i+1];
            if (nums[i]>prev && nums[i] < next) {
                //cout << "prev = " << prev << " next =" << next << endl;
                //cout << endl << nums[i] << endl;
                s+=nums[i];
            };
        }
        //cout << endl;
        return s;
    }
};