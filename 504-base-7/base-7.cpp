class Solution {
public:
    string convertToBase7(int num) {
        string sign = "";
        if (num < 0) {
            num = - num;
            sign = "-";
        };
        string res = "";
        while (num > 0){
            char digit =  '0'+num % 7;
            num /= 7;
            res = digit + res;
        };
        if (res == "") res = "0";
        res = sign + res;
        return res;
    }
};