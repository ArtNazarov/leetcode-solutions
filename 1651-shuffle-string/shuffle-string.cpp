class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map<int, char> ix;
        int index = 0;
        for (auto e : indices){
            ix[e] = s[index];
            index++;
        };
        index = 0;
        string res = "";
        while (index<s.size()){
            res += ix[index];
            index++;
        };
        return res;
    }
};