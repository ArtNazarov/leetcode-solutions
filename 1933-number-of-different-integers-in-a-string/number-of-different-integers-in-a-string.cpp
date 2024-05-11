#include <sstream>
using namespace std;
class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> nums;
        string buf = word;
        for (auto& ch : buf){
            if (!isdigit(ch)){
                ch = ' ';
            };
        };
        stringstream ss(buf);
        string w;
        while (ss >> w ){
            // cout << w << endl;
            while (w[0]=='0' && w.size()>1) { w.erase(0, 1);};
            //cout << w << endl;
            nums.insert(w);
        };
        return nums.size();
    }
};