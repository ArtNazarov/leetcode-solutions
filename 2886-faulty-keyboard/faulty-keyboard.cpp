#include <algorithm>
#include <ranges>
using namespace std;
class Solution {
public:
    string finalString(string s) {
        string res = "";
        for (auto ch : s){
            if (ch == 'i'){
                ranges::reverse(res);
            } else {
                res += ch;
            };
        };
        return res;
    }
};