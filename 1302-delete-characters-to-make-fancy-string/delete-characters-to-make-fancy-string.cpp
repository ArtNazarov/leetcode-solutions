// store previous char in separate variable
class Solution {
public:
    string makeFancyString(string s) {
        char prev = ' ';
        string res = "";
        int cnt = 0;
        for(char ch : s){
            
            if (ch == prev){
                cnt++;
                if (cnt < 2) {
                    res+=ch;
                };
            } else {
                cnt = 0;
                res+=ch;
            };

            prev = ch;
        };
        return res;
    }
};