#include <vector>
using namespace std;
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int mx = -1;
        int sz = nums.size();
        for (int i=0;i<sz-1;i++){
                int d;
                int t = nums[i];
                int digit1 = nums[i] % 10;
                while ( t > 0) { d = t % 10;  if ( d > digit1) digit1=d; t/=10;};
            for (int j=i+1;j<sz;j++){
                
                t = nums[j];
                int digit2 = nums[j] % 10;
                while ( t > 0) { d = t % 10;  if ( d > digit2) digit2=d; t/=10;};
                if (digit1 == digit2) {
                    int sum = nums[i] + nums[j];
                    if (mx < sum ) mx = sum;
                };
            }; // end for j
           
        }; // end for i
         return mx;
    }
};