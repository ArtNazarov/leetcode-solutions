class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> ms;
        map<char, int> mt;
        for (auto ch : s) ms[ch]++;
        for (auto ch : t) mt[ch]++;
        char res = ' ';
        for (auto p : mt){
            char ch = p.first;
            if (ms.find(ch)==ms.end()){
                res = ch;
                break;
            } else if (mt[ch]>ms[ch]){
                res = ch;
                break;
            };   
        };
        return res;
    }
};