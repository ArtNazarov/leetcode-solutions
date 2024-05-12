#include <map>
using namespace std;

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
      int cnt = 0;
      int sz = words.size();
      map<char, int> m = {{'a',1}, {'e',1}, {'i',1}, {'o',1}, {'u',1}};
      int e = min(sz, right+1) - 1;
      for (int i=left;i<=e;i++){
            if (words[i].size()>=1){
                char beg = words[i][0];
                bool vowInB = m[beg]==1;
                char las = words[i][words[i].size()-1];
                bool vowInE = (beg == las) ? beg  : m[las]==1;
                if (vowInB && vowInE) cnt++;
            };
      };
      return cnt; 
    }
};