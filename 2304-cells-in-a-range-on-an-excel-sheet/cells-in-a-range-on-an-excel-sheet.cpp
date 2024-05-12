#include <vector>
using namespace std;
class Solution {
public:
    vector<string> cellsInRange(string s) {
        char col1 = s[0];
        char col2 = s[3];
        char row1 = s[1];
        char row2 = s[4];
        string x;
        vector<string> v;
        for(auto col=col1;col<=col2;col++){
            for(auto row=row1;row<=row2;row++){
                x = "";
                x += col;
                x += row;
                v.push_back(x);
            };
        };
        return v;
    }
};