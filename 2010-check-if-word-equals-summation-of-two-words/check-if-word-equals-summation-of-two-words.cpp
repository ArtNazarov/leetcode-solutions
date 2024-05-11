class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
      auto encode = [](string s){
        int num = 0;
        int sz = s.size();
        for (size_t i=0; i<sz; i++){
            char ch = s[i]-'a';
            num = num << 1;
            num*=5;
            num += ch;  
        };
        return num;
      };
      int a = encode(firstWord);
      int b = encode(secondWord);
      int c = encode(targetWord);
      return (a + b == c);
    }
};