// using lambda
class Solution {
public:
    string replaceDigits(string s) {
       auto shift = [](char ch, char ix) { return ch + ix; };
       int sz = s.size();
       int index = 0;
       string res = "";
       while (index < sz) {
            char ch = s[index];
            if (index == sz-1) { res+=ch; break; };
            string str_n = "0";
            while (index<sz) {
                index++; 
                if (s[index]>='0' && s[index]<='9') str_n += s[index]; else break; };

            res+=ch;
            char sh  = (char) stoi(str_n);
            res+=shift(ch, sh);

        };
       return res;
    }
};