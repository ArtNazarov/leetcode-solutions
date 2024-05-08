#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        set<char> st1; map<int, int> f1;
        set<char> st2; map<int, int> f2;
        for(auto ch : s) { f1[ch]++; st1.insert(ch); };
        for(auto ch : t) { f2[ch]++; st2.insert(ch); };
        if (st1.size()!=st2.size()) return false;
        return f1 == f2;
    }
};