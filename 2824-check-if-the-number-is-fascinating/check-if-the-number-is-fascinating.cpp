#include <map>
using namespace std;

bool testAllDigits(string& s){
     
    map<int, int> f;
    for(auto ch : s){
        int digit = ch - '0';

        if (digit == '0') return false; else {
            f[digit]++;
            if (f[digit]>1) return false;
        };
              
    };
    bool fl = true;
    for(auto key = 1; key <= 9; key ++){
        auto val = f[key];
        fl = fl && (val == 1);
        if (!fl) return false;
    };
    return fl; 
}

class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n);
        string s2 = to_string(2 * n);
        string s3 = to_string(3 * n);
        s += s2;
        s += s3;
        cout << s << endl;
        return testAllDigits(s);
    }
};