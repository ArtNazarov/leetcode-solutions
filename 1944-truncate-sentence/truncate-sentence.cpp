#include <sstream>
class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string w;
        int cnt = 0;
        string res = "";
        while (ss >> w){
            res+=w;
            res+=" ";
            cnt++;
            if (cnt == k) break;
        };
        res.erase(res.size()-1, 1);
        return res;
    }
};