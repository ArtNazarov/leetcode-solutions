
class Solution {
public:
    string reverseWords(string s) {
       string word = "";
       string result = "";
       for (int i=s.length()-1;i>=0;--i){
           if (s[i] == ' ') {
               if (word!=""){
                   result += ' '+word ;
                   word = "";
               };
               continue;
           };
           if (s[i]!=' '){
                word = s[i] + word;
           };
       };
       if (word!=""){
           result += ' '+word ;
       };
       result.erase(0, 1);
       return result;
    }
};