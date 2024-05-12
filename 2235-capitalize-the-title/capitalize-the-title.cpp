#include <sstream>
using namespace std;

void capitalizeIfMore2(string& w){
     size_t sz = w.size();
      w[0] = toupper(w[0]);
      for (size_t i=1;i<sz;i++) w[i] = tolower(w[i]);
}
// using switch
class Solution {
public:
    string capitalizeTitle(string title) {
            stringstream ss(title);
            string w;
            string res;
            while (ss >> w){
                string temp = w;
                int sz = w.size();
                switch (sz) {
                    case 1 : { temp[0] = tolower(temp[0]); break; }
                    case 2: { temp[0] = tolower(w[0]); temp[1]=tolower(temp[1]); break; }
                    default: { capitalizeIfMore2(temp); }
                };
                res+=temp+" ";
            };
            res = res.substr(0, res.size()-1);
            return res;
    }
};