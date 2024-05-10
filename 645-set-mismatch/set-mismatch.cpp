 
#include <vector>
 

using namespace std;
class Solution {
public:
            
            vector<int> findErrorNums(vector<int>& nums){
                int sz = nums.size();
                long sumOfDiff1 = 0;
                long sumOfDiff2 = 0;
                int duble;
                int lossed;
                for (size_t value = 1; value < sz + 1; value ++){
                    int index = value - 1;
                    sumOfDiff1 += nums[index] - value;
                    sumOfDiff2 += (long)nums[index]*nums[index] - (long)value * value;
                };
                lossed = (int)( sumOfDiff2 - sumOfDiff1 * sumOfDiff1) / (2 * sumOfDiff1);
                duble = lossed + sumOfDiff1;
                vector<int> res = { duble, lossed };
                return res; 
        }
};