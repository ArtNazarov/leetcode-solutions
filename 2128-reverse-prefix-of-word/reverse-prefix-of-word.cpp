#include <string>
#include <algorithm>
class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t ps = word.find(ch);
        if (ps == string::npos) return word;
        string prefix = word.substr(0, ps+1);
        ranges::reverse(prefix);
        string suffix = word.substr(ps + 1, word.size() - ps);
        return prefix + suffix;
    }
};