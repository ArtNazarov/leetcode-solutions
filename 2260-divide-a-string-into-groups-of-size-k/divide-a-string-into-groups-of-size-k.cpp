#include <vector>
using namespace std;
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        string g;
        while (s != "") {
            int index = 0; int cnt = 0; g = "";
            while (s!="" && index < k) {
                g+=s[0]; 
                s.erase(0, 1); 
                index++;};

            if (g.size()==k)
                { res.push_back(g); }
            else if (g.size()<k && g.size()>0) {
                 int cnt = k - g.size();
                for (int i =1;i<=cnt;i++) g+=fill;
                res.push_back(g);
          };
            }
  

        return res;
    }
};