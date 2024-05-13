#include <vector>
using namespace std;
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        auto sz = nums.size();
        
        int sumElems = 0;
        int sumWithCoeff = 0;
        for (auto i=0;i<sz;i++){
            sumElems += nums[i];
            sumWithCoeff += i * nums[i];
        };
       
        int best = sumWithCoeff; // initial
        int curSum = sumWithCoeff;
        for (int r = nums.size()-1; r>=0; r--){
            curSum += sumElems - nums[r] * sz; // next sum by previous
            best = max(curSum, best); 
        };
        return best;
    }
};