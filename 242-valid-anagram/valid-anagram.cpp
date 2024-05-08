#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int, int> f;
        if ( s.size()!=t.size() ) return false;
        for(auto ch : s) f[ch]++;
        for(auto ch : t) {
            f[ch]--;
            if (f[ch]<0) return false;
        }
        for(auto ch : s){
            if (f[ch]>0) return false;
        }
        return true;
    }
};