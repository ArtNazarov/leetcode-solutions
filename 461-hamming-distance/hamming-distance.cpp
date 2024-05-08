class Solution {
public:
    int hammingDistance(int x, int y) {
     int diffCount = 0;
     for (auto i=0;i<31;i++){
        int bit1 = x % 2;
        int bit2 = y % 2;
        if (bit1 != bit2) diffCount ++;
        x =  x >> 1;
        y = y >> 1;
        if (x == 0 && y==0) break;
     };
    return diffCount;
    }
};