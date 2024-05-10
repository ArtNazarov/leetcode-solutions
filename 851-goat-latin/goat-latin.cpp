// Using unordered set
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_set>
class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        stringstream ss(sentence);
        string w;
        string suf = "";
        string res = "";   
        while (ss >> w){
            suf += "a";
            if  (vowels.find(tolower(w[0])) != vowels.end()){
            w += "ma";
            } else {
            char ch = w[0];
            w = w.substr(1, w.size() - 1) + ch + "ma";
            };
          
            w+=suf;
            res+=w+" ";
        }
        return res.substr(0, res.size() - 1); 
    }
};