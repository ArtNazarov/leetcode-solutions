#include <set>
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 0 || num == 1) return false;
        int s = 1;
        int i = 2;
        set<int> divisors;
        while (i  < num - 1){
            if (num % i == 0){
            divisors.insert(i);
            divisors.insert(num / i );
            // cout << i << endl;
            };
            i *= 2;
            
        }
            i = 3;
            while (i * i <= num){
                // cout << "Current divisor:" << i << endl;

                if (num % i == 0) {
                    s+=i;
                    divisors.insert(i);
                    int y = num / i;
                    if (y != i) { 
                    // cout << y << endl;
                    divisors.insert(y);
                    };
                }
                i+=2;
            };
             
            for (auto x : divisors){
                 
                cout << x << endl; 
                s += x;
            }
            //cout << "Sum:" << s << endl;
            return (s == num);
    }
};