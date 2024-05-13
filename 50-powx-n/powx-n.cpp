class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        
        unsigned long n_ = abs(n);
        
        while (n_ > 0) {
            if (n_ % 2 != 0) {
                result *= x;
            };
            
            x *= x;
            n_ = n_ >> 1;
        };
        
        return n < 0 ? 1 / result : result;
        
        };
   
};