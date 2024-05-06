#include <map>
class Solution {
public:
    
    int climbStairs(int n) {
       fibs.clear();
       fibs[1] = 1;
       fibs[2] = 2;
       return Fib(n);
    }

    int Fib(int n){
        if (n <= 0) return 0;
        if (n == 1 && n == 2) return fibs[n];
        if (fibs.find(n) != fibs.end()){
            // found in memory
            return fibs[n];
        }
        else {
            int result = Fib(n-1)+Fib(n-2);
            fibs[n] = result; // saves in memory
            return result;
        }
    }

   private:
    std::unordered_map<int, int> fibs;
};