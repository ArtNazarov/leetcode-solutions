#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        map<int, int> f1;
        map<int, int> f2;
        int sz = s.size();
        for(auto i=0;i<sz;i++){
            f1[s[i]]++;
            f2[t[i]]++;
        }
        return f1 == f2;
    }
};