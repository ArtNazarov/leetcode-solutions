// Using transform and lambda
#include <algorithm>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
       string res = "";
        transform(s.begin(), s.end(), back_inserter(res),
        [](char ch) { if (ch>='A' && ch<='Z') {return (char) tolower(ch); }; return ch;});
        return res;
    }
};