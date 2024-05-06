class Solution {
public:
    int mySqrt(int x) {
        // Newton-Rapson method
        if (x == 0 || x == 1) {
            return x;
        }

        double y = x;
        double eps = 1e-3;
        double prev_y = y;
        double y2 = y * y;
        while (fabs(y2 - x) > eps) {
            y = y2;
            y+=x;
            y/=2;
            y/=prev_y;
            prev_y = y;
            y2 = y * y;
        }
        return (int)y;
    }
};