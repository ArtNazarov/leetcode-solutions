class Solution {
public:
    int arrangeCoins(int n) {
      if (n==1) return 1;
      int min_k = 1;
      int max_k = n; // n is target
      while (min_k <= max_k){
        int maybe_k = min_k + (max_k - min_k) / 2; // compute mid point
        long long sumP = (long)maybe_k * (long)(maybe_k + 1) >> 1; // f(k) - ariphmetic progression sum
        if (sumP == n) return maybe_k; // if exactly equal
        if (sumP < n) {
            min_k = maybe_k + 1;
        } else {
            max_k = maybe_k - 1;
        };
      };
      return max_k; // return right point
    }
};