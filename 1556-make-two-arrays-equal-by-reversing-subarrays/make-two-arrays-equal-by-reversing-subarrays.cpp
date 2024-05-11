class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size()!=arr.size()) return false;
       unordered_map<int, int> f1;
       unordered_map<int, int> f2;
       for (auto ch : target) f1[ch]++;
       for (auto ch : arr) f2[ch]++;
        return f1 == f2;
    }
};