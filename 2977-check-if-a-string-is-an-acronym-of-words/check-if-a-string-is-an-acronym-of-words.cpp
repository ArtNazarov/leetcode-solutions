#include <vector>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
      if (s.size()!=words.size()) return false;
      int i = 0;
      for(auto w : words){
        if (w[0]!=s[i])  return false;
        i++;
      };
       return true;
    }
};