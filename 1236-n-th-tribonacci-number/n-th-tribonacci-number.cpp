// Using iteration method
class Solution {
public:
    int tribonacci(int n) {
        int f = 0;
        int s = 1;
        int t = 1;
        if (n == 0) return f;
        if (n == 1) return s;
        if (n == 2) return t;
        int r = 0;
        n = n - 2;
        while (n > 0){
            r = f + s + t;
            f = s;
            s = t;
            t = r;
            n--;
        };
        return r;
    }
};