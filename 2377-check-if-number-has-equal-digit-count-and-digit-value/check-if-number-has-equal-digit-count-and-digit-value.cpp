#include <map>
using namespace std;
class Solution {
public:
    bool digitCount(string num) {
        map<int, int> f;
        for(auto ch : num){
            int x = ch - '0';
            f[x]++;
        };
        for(int i=0;i<num.size();i++){
            int digit = num[i] - '0';
            if (f[i]!=digit) return false;
        };
        return true;
    }
};