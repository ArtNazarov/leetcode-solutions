#include <bitset>

int is_prime(int n){
    if (n<=1) return false;
    if (n==2 || n == 3) return true;
    int i = 2;
    while (i*i<=n) {
        if (n % i == 0) return false;
        i++;
    };
    return true;
}

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        const int BITS = 8 * sizeof(int);
        int cnt = 0;
        for (int i=left; i<=right; i++) {
            bitset<BITS> b(i);
            if (is_prime(b.count())) cnt ++;
        };
        return cnt;
    }
};