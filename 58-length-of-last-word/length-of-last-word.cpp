#include <string_view>
#include <string>
#include <vector>
class Solution {
public:
    int lengthOfLastWord(string s) {
         stringstream ss(s);
         string w = "";
         while (ss >> w) {};
         return w.size();
         
          
    }
};