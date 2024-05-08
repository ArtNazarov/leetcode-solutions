class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0) return false;
        if (n==1) return true; // special case
        // pow(3, 19) is 1162261467
        return 1162261467 % n == 0;
    }
};