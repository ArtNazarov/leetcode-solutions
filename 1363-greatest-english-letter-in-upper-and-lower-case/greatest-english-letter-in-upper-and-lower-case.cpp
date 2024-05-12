#include <set>
using namespace std;
class Solution {
public:
    string greatestLetter(string s) {
        set<char> lw;
        set<char> up;
        
        for (auto ch : s){
            if (ch == toupper(ch)) up.insert(ch);
            if (ch == tolower(ch)) lw.insert(ch);
        };

        char u = '@';
        for (auto ch : lw){
          
            if (up.find(toupper(ch))!=up.end()) u=max(ch, u); 
        };
        string res = ""; 
        if (u=='@') return res;
        res+=toupper(u);
        return res;
    }
};