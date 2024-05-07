#include <cstdint>
#include <sys/types.h>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        if (0 == n) {
            return 0;
        };
        uint32_t r = 0;
        for (int i = 0; i<32; i++){
            int d = (n % 2);
            n = n >> 1;
            r = r << 1;
            r += d;
        };
        return r;
    };
};