class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> f;
        for (auto ch : s) f[ch]++;
        int x = f[s[0]];
        for (auto p : f) if (p.second != x) return false;
        return true;
    }
};