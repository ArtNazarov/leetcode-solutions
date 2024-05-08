#include <sstream>
class Solution {
public:
    int countSegments(string s) {
        stringstream st(s);
        int cnt = 0; string w;
        while (st >> w){
            if (w.size()!=0) cnt++;
        };
        return cnt;
    }
};