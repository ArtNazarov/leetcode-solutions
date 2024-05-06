class Solution {
public:
    int mySqrt(int x) {
        // Newton-Rapson method
        if (x == 0 || x == 1) {
            return x;
        }

        double y = x;
        double eps = 1e-6;
        while (fabs(y * y - x) > eps) {
            double t = y;
            y*=y;
            y+=x;
            y/=2;
            y/=t;
        }
        return (int)y;
    }
};