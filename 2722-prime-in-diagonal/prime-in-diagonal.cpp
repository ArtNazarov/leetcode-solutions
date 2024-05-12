#include <map>
#include <cmath>
#include <vector>
using namespace std;
// square root property for primes
bool isPrime(int num) {
        if(num <= 1) return false;
        int d = 2;
        while (d*d <= num){
            if (num % d == 0) return false;
            d++;
        };
        return true;
    }
class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        map<int, bool> memo;
       int mx = 0;
       int sz = nums.size();
       for (int i=0;i<sz;i++){
        int d1 = nums[i][i];
        int d2 = nums[i][sz-i-1];
        bool fp = false;
        bool sp = false;
        if (memo.find(d1)!=memo.end())  {
            fp = memo[d1];
        } else {
            fp = isPrime(d1);
            memo[d1] = fp;
        };
        if (fp){
            if (mx < d1) mx = d1;
        };
        if (memo.find(d2)!=memo.end()){
            sp = memo[d2];
        } else {
            sp = isPrime(d2);
            memo[d2] = sp;
        }
        if (sp){
            if (mx < d2) mx = d2;
        }; 
       };
       return mx; 
    }
};