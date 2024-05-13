class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int s = 0;
        int t = x ;
        while (t > 0){
            s += t % 10;
            t = t >> 1;
            t /= 5;
        };
        return (x % s == 0) ? s : -1;
    }
};