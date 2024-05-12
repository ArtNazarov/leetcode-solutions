// using function with params by ref
void getS(string& s, bool& chg, int& ps){
     int i = ps;
      int j = s.size()-1-ps;
      while (i<j && s[i]==s[j]){
        i++;
        j--; 
      };
       // cout << "b:" << s << endl;
      // cout << s[i] << " " << s[j] << endl;
     if (s[i] < s[j]){
        s[j] = s[i]; chg = true;
     } else if (s[i] > s[j]) {
        s[i] = s[j]; chg = true;
     } else {
        chg = false;
     }
     // cout << "chg:" << s << endl;
     ps = min(i, j);
 
}

class Solution {
public:
    string makeSmallestPalindrome(string s){ 
      bool chg;
      int ps = 0;
      do {
        getS(s, chg, ps);
        // cout << ps << endl;
      } while (chg);   
        return s;
    }
};