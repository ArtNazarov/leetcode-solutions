#include <bitset>
class Solution {
public:
    bool isPowerOfTwo(int n) {
       if (n <= 0) return false;
       if (n == 1 || n == 2) return true;
       if (n % 2 != 0) return false; 
       
       bitset<32> b(n);
       return b.count() == 1;
    }
};