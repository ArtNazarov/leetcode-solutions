#include <sstream>
class Solution {
public:
    string reorderSpaces(string text) {
        int cntSpaces = 0;
        for (auto ch : text){
            if (ch == ' ') cntSpaces++;
        };
        vector<string> words;
        stringstream ss(text);
        string w;
        int cntWords = 0;
        while (ss >> w){
            words.push_back(w);
            cntWords++;
        };
        int cntDivide = 0;
        int restSpaces = cntSpaces;
        if (cntWords > 1){
            cntDivide = cntSpaces / (cntWords - 1);
            restSpaces = cntSpaces % (cntWords - 1);
        };
        string spaces = "";
        for (int i=1;i<=cntDivide;i++) spaces+=' ';
        string res = "";
        for (auto w : words){
            res+=spaces;
            res+=w;
        };
        res.erase(0, spaces.size());
        for (int i=1;i<=restSpaces;i++){
            res+=' ';
        };
        return res;
    }
};