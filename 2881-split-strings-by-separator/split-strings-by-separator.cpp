#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        for (auto w : words){
            for (auto& ch : w) if (ch == separator) ch = ' ';
            stringstream ss(w);
            string z;
            while (ss >> z) res.push_back(z); 
        };
        return res;
    }
};