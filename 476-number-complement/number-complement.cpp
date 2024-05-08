#include <bitset>
class Solution {
public:
    template<typename T>
    T tplFindComplement(T num){
        const int BITS = 8 * sizeof(T);
        bitset<BITS> mask(num);
        bitset<BITS> bs(num);
        bs.flip();
        int index = BITS;
        for (int i=BITS-1;i>=0;i--){
            if (mask[i]==1) { index = i; break; }
        };
        for (int i=BITS-1;i>=0;i--){
            if (i>index) mask[i] = 0; else mask[i] = 1;
        };
        bs &= mask;
        return (T) bs.to_ulong();
    }
    int findComplement(int num) {
        return tplFindComplement<int>(num);
    }
};