#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
       map<int, int> f;
       for (auto x : nums){
        f[x]++;
       };
        int a = nums[0]; int b = nums[1]; int c = nums[2];
        if (a+b<=c || b+c<=a || a+c<=b) return "none";
      
       if (f.size()==1) return "equilateral";
       if (f.size()==2) return "isosceles";
       return "scalene";
    }
};