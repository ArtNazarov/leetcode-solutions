#include <sstream>
using namespace std;
class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string w;
        int x = INT_MIN;
        bool isAsc = true;
        int prev = INT_MIN;
        while (ss >> w){
            bool isNumber = true;
            for(auto ch : w){
                isNumber = isNumber && (ch>='0' && ch<='9');
                if (!isNumber) break;
            };
            if (isNumber){ 
                x = stoi(w);
                isAsc = isAsc && (x>prev); prev = x;
                if (!isAsc) return isAsc;
            };
            
        };  
        return isAsc;
    }
};