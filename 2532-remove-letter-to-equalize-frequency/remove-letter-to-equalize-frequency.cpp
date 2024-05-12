#include <unordered_map>
using namespace std;

void getF(string& s, unordered_map<char, int>& f){
    for(auto ch  : s) f[ch]++;
}

bool isEqF(unordered_map<char, int>& f){
    int prev = INT_MIN;
    bool fl = true;
    for(auto p  : f) {
        if (prev == INT_MIN) prev = p.second;
        fl = fl && (p.second == prev);
        prev = p.second;
    };
    return fl;
}

class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> f;
        set<char> skip;
        string t;
        int z = word.size()-1;
        for(int i=0;i<word.size();i++){
            if (skip.find(word[i])==skip.end()) {
            t = word;
            t.erase(i, 1);
            f.clear();
            getF(t, f);
            if (isEqF(f)) return true; else skip.insert(word[i]);
            };
            if (skip.find(word[z])==skip.end()) {

            
            t = word;
            t.erase(z, 1);
            f.clear();
            getF(t, f);
            if (isEqF(f)) return true; else skip.insert(word[z]);

            };
            z--;
            if (i>z) break;
        };
        return false;
    }
};