#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string res = "";
        string b = "";
        map<int, char> ins_pos;
        int index = 0;
        bool rev = false;
        for (auto ch : s){
            if (ch>='a' && ch<='z') 
            { b+=ch; }
            else if (ch>='A' && ch<='Z'){
                b+=ch;
            } 
            else {
                res += b;
                ins_pos[index] = ch; 
                b = "";
            };
        index++;
        };
        if (b!=""){
                res += b;
        };
        ranges::reverse(res);
        for (auto shift : ins_pos){
            res.insert(shift.first, 1, shift.second);
        }
        return res;
    }
};