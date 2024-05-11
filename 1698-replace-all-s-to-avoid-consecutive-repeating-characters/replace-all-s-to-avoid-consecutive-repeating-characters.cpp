// Solution with lambda
class Solution {
public:
    string modifyString(string s) {
      auto getCh = [](char prev, char next){
        for(char ch = 'a';ch<'z';ch++){
            if (ch!=prev && ch !=next) {
                return ch;
            };
        
        };
        return ' ';
      };
      for (int i=0;i<s.size();i++){
        char prev = ' ';
        if (i-1>=0) {prev = s[i-1];};
        char next = ' ';
        if (i+1<(int)s.size()) {next = s[i+1];};
        if (s[i] == '?') {
            s[i] = getCh(prev, next);
        };
      
      };
        return s;
    }
};