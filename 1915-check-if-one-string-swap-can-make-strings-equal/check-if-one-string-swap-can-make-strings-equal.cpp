class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char, int> f1;
        unordered_map<char, int> f2;
        if (s1.size()!=s2.size()) return false;
        int cnt = 0;
        for (int i=0;i<s1.size();i++){
            if (s1[i]!=s2[i]) cnt++;
        }
        for (auto ch : s1){
            f1[ch]++;
        };
        for (auto ch : s2){
            f2[ch]++;
        };
        return ((cnt == 0 || cnt == 2)  && f2 == f1);
    }
};