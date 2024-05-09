// Solution with string stream
#include <sstream>
class Solution {
public:
    bool checkRecord(string s) {
       // 1 Count A letters
        int cntA = 0;
        for (auto ch : s) {
            if (ch == 'A') cntA++;
            if (cntA > 2) break;
            };
        // 2 Condition about absence
        bool isAbsent = cntA >= 2;
        for (auto & ch : s){
            if (ch!='L') ch = ' ';
        };
        stringstream ss(s);
        bool isLate = false;
        string w;
        while (ss >> w) if (w.size()>=3) { isLate = true; break; };
        // Check both
        return !isLate && !isAbsent;
    }
};