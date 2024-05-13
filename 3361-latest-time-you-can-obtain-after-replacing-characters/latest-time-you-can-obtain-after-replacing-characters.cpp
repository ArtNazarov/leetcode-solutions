class Solution {
public:
    string findLatestTime(string s) {
      const char q = '?';
      char h1 = s[0];
      char h2 = s[1];
      char m1 = s[3];
      char m2 = s[4];
      
      if (h2 == q && h1 != '0'){
        h2 = '1';
      }  else if (h2 == q) {
        h2 = '9';
      }
      if (h1 == q)  h1 = '1';
      int h = (h1 - '0') * 10 + (h2 - '0');
      //cout << h << endl;
      if (h>11) {h1='0';};
      if (m1 == q) m1 = '5';
      if (m2 == q) m2 = '9';
      s = "";
      s+=h1;
      s+=h2;
      s+=':';
      s+=m1;
      s+=m2; 
      return s;
    }
};