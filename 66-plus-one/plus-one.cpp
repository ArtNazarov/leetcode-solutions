#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
 
        int cur = 0;
        int up = 1;
      
        for (int i = digits.size()-1; i>=0; --i){
            sumDigits(up, digits[i], up, cur);
            digits[i] = cur;
              
        };

        if (up!=0){
            digits.insert(digits.begin(), up);
        };

 
        return digits;
    }

    void sumDigits(int a, int b, int& up, int& cur){
        int sum = a + b;
        cur = sum % 10;
        up = sum / 10;
    }
    
};