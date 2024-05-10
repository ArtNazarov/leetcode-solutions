class Solution {
public:
    bool hasAlternatingBits(int n) {
       int prev = 1 - n % 2;
       while (n>0){
            int cur_bit = n % 2;
            if (prev == cur_bit){
                return false;
            } else {
                prev = cur_bit;
            };
            // Shifting bits to right
            n = n >> 1;
       };
       return true;
    }
};