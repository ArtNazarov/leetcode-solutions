class Solution {
public:
    string toHex(int num) {
        if (num==0 ) return "0";
        if (num==-2147483648) return "80000000";
          unsigned long x;
        if (num>=0) x = num; else x = 0xFFFFFFFF - (long)( - num) + 1;
        string res = "";
        while (x > 0) {
            int digit = x % 16;
            x = x >> 4;
            char ch = ' ';
            if (digit>=0 && digit <=9) ch='0'+digit;  else ch = 'a'+digit-10;
            res = ch + res;
        };
        return res;
    }
};