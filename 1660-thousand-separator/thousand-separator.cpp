class Solution {
public:
    string thousandSeparator(int n) {
      string s = to_string(n);
      string res = "";
      int d = 0;
      size_t sz = s.size();
      for (int i =sz-1; i>=0; i--){
        res =  s[i] + res;
        d = (d + 1) % 3;
        if (d == 0) res = '.' + res;
      };
      if (res[0] == '.') res.erase(0, 1);
      return res;
    }
};