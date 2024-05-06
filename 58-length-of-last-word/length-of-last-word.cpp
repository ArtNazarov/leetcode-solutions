#include <string_view>
#include <string>
#include <vector>
class Solution {
public:
    int lengthOfLastWord(string s) {
         string& text = s;
         const char delim = ' ';
          
         int result = 0;
         int sizeCurrentToken = 0;
         
         for (int i=text.length()-1;i>=0;--i){
             // if not delimeter add to token
             
             if (text[i]!=delim){
                 sizeCurrentToken++;     
             };
              
             

             // if delimiter and token not empty
             // add them to tokens list and 
             // change token to empty string
             if (text[i]==delim){
                 if (sizeCurrentToken!=0){
                     result = sizeCurrentToken;
                     sizeCurrentToken = 0;
                     break;
                 };
             };
         };
            // if not delimeter in first char

             if (sizeCurrentToken!=0){
                 result = sizeCurrentToken;
             };

        return   result;  
         
          
    }
};