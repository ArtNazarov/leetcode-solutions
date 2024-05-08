#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        ranges::sort(s.begin(), s.end());
        ranges::sort(t.begin(), t.end());
        return (s.compare(t)==0);
    }
};