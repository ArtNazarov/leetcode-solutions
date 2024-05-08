class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> f1;
        for (auto ch : ransomNote) f1[ch]++;
        unordered_map<char, int> f2;
        for (auto ch : magazine) f2[ch]++;
        for(auto p : f1){
            char ch = p.first;
            if (f2.find(ch)==f2.end()) return false;
            if (f1[ch] > f2[ch]) return false;
        };
        return true;
    }
};