class Solution {
public:
    bool isPowerOfFour(int n) {
      unsigned long int p = 4;
      if (n < 0 ) return false;
      if (n==1) return true;

      do {
          if (p>n) return false;
          if (p==n) return true;
          p = p << 1;
          p = p << 1;
      } while (p<=n);
 

      return false;
    }
};