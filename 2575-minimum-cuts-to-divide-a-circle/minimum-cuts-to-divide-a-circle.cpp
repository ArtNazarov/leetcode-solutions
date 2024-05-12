// using ternary operator
class Solution {
public:
    int numberOfCuts(int n) {
        if (n==1) return 0;
        int x = log(n)/log(2);
        int y = n / 2;
        if (y * 2 == n) x = y;
        return  (n%2!=0)  ? n : x;
    }
};