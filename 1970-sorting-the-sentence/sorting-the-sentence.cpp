#include <sstream>
class Solution {
public:
    string sortSentence(string s) {
      vector<string> w;
      stringstream ss(s);
      string st;
      while (ss >> st){
        w.push_back(st);
      };
      
      vector<string> res = w;
      for (auto st : w){
        int num = st[st.size()-1]-'0';
        res[num-1] = st.substr(0, st.size()-1);
      };
      string z = "";
      for (auto st : res){
        z += st + " ";
      };
      z.erase(z.size()-1, 1);
      return z;
    }
};