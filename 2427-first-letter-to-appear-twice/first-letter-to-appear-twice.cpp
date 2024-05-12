#include <map>
using namespace std;
class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, int> f;
        char prev = ' ';
        char x = ' ';
        bool anyP = false;
        for (char ch : s){
            if (x == ' ') x = ch;
            if (f[x]==2) return x;
            f[ch]++;
            if (!anyP) {
                 anyP = (f[prev] == 1);
            };
            if (anyP) if (f[ch]==2) return ch;
            prev = ch;
        }
      
        for (char ch : s){
            if (f[ch]>=2) return ch;
        }
        return ' ';
    }
};