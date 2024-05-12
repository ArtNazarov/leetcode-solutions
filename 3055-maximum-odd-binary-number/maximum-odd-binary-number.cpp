#include <algorithm>
using namespace std;
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
      int i = s.rfind('1');
      if (i!=-1 && s[s.size()-1]=='0'){
        swap(s[i], s[s.size()-1]);
      };
      sort(s.begin(), prev(s.end()), [](auto a, auto b){
        return a > b;
      });
      return s;  
    }
};