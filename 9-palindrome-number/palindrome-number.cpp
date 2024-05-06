#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int temp = x;
        int max_exp = 0;
        while (temp > 0){
            max_exp++;
            temp = temp >> 1;
            temp /= 5;
        };
        int mx = pow(10, max_exp-1);
        int a = x;
        int b = x;
        int cnt = 0;
        do {
            int d1 = a;
            if (mx != 0)  d1 = a / mx;
            
            int d2 = b % 10;
            //cout << d1 << " " << d2 << endl;
            if (d1 != d2) return false;
            a  -= d1 * mx;
            mx = mx >> 1;
            mx /= 5;
            b = b >> 1;
            b /= 5;
            cnt++;
        } while (cnt<=max_exp/2);
        return true;
    }
};