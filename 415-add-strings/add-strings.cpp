#include <ranges>
void sm(int d1, int d2, int& o, int& s){
    o = (d1+d2) / 10;
    s = (d1+d2) % 10;
}

class Solution {
public:
    string addStrings(string num1, string num2) {
      ranges::reverse(num1);
      ranges::reverse(num2);
      
      int index = 0;
      int o = 0;
      int s = 0;
      string res = "";
      while (num1.size()>0 && num2.size()>0){
        int d1 = num1[0]-'0';
        d1 += o;
        int d2 = num2[0]-'0';
        sm(d1, d2, o, s);
        char ch = s + '0';
        res = ch + res;
        num1.erase(num1.begin(), num1.begin()+1);
        num2.erase(num2.begin(), num2.begin()+1);
      };

      if (num1.size() == 0 && num2.size() > 0){
        while (num2.size()>0){
            int t = o;
            int d2 = num2[0]-'0';
            sm(t, d2, o, s);
            char ch = s + '0';
            res = ch + res;
            num2.erase(num2.begin(), num2.begin()+1);
        };
      } else if (num2.size() == 0 && num1.size() > 0){
        while (num1.size()>0){
            int t = o;
            int d1 = num1[0]-'0';
            sm(t, d1, o, s);
            char ch = s + '0';
            res = ch + res;
            num1.erase(num1.begin(), num1.begin()+1);
        };
      }


      if (o >= 1) { char d = '0' + o; res = d + res; };
        return res;
    
    };
};