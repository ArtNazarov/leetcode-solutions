class Solution {
public:
    bool isUgly(int n) {
       if (n<=0) return false; 
       if (n == 1) return true;
       while (n % 2 == 0) n = n >> 1;
       if (n==1) return true;
       while (n % 3 == 0) n/=3;
       if (n==1) return true;
       while (n % 5 == 0) n/=5;
       if (n==1) return true;
       return false; 
    }
};