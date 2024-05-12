#include <map>
using namespace std;
class Solution {
public:
    string decodeMessage(string key, string message) {
       map<char, char> code;
       for(auto ch='a';ch<='z';ch++){
        code[ch] = ' ';
       }
       char x = 'a';
       for(auto ch : key){
        if (!isalpha(ch)) continue;
        if (code[ch]==' ') { 
            code[ch] = x;
            x++;
        };
       };
       string s = "";
       for(auto ch : message) if (isalpha(ch)) s+=code[ch]; else s+=ch;
       return s;
    }
};