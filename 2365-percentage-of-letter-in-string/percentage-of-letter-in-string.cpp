// using floor
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int sm = 0;
        for (auto ch : s){
            if (letter == ch) sm++;
        };
       
        return std::floor( (int)  ((double) sm / s.size() * 100));
    }
};