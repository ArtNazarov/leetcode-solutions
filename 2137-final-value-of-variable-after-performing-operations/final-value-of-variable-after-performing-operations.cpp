#include <vector>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int x = 0;
       for (auto op : operations) {
            char code = op[0];
            if (op[0] == 'X') code = op[1];
            switch (code) {
                case '-' : { x--; break; }
                case '+' : { x++; break; }
            };
       };
       return x; 
    }
};