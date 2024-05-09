// Solution with string stream
#include <sstream>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res = "";
        string w;
        while (ss >> w){
            reverse(w.begin(), w.end());
            res+=' '+w;
        };
        res.erase(0, 1);
        return res;
    }
};