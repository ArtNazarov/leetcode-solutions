#include <map>
#include <sstream>
#include <vector>
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> code;
        unordered_map<string, char> rcode;
        vector<string> words;
        stringstream ss(s);
        string w;

        while (ss >> w){
            words.push_back(w);
        };
        if (words.size()!=pattern.size()) return false;
        for (int i=0;i<pattern.size();i++){
            if (code.find(pattern[i])!=code.end()){
                if (words[i] != code[pattern[i]]) return false;
            } else {
                if (rcode.find(words[i])!=rcode.end()){
                    if (rcode[words[i]] != pattern[i]) return false;
                };
                code[pattern[i]] = words[i];
                rcode[words[i]] = pattern[i];
            };
        };
            return true;
    }
};