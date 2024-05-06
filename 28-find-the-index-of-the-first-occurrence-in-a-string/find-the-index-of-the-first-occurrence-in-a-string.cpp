#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
      int ps = 0;
      int sz1 = haystack.size();
      int sz2 = needle.size();
      if (sz2 > sz1) return -1;
      
      while (ps < sz1){
           string s = haystack.substr(ps, sz2);
           if (s == needle) return ps;
           ps++;
        };
   
      return -1;
    }
};