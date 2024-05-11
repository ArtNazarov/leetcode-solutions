#include <map>
using namespace std;

map<int, int> getF(string& w){
    map<int, int> f;
    for(auto ch : w) f[ch]++;
    return f;
}

bool compare(map<int, int>& f1, map<int, int>& f2){
    for (auto ch='a';ch<='z'; ch++){
        int x = f1[ch];
        int y = f2[ch];
        int diff = abs(x - y);
        if (diff > 3) return false;
    };
    return true;
}

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<int, int> f1 = getF(word1);
        map<int, int> f2 = getF(word2);
        return compare(f1, f2);
    }
};