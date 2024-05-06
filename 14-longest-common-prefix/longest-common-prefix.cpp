#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const int MAX_L = 200;  
        string prefix = "";
        for (int i=0;i<=MAX_L - 1;i++){
            bool add_char = true;
            if (i >= strs[0].size()) break;
            char l = strs[0][i];
            for (const auto& s : strs){
                if (i >= s.size()) {add_char = false; break;};
                add_char = add_char && s[i] == l;
                if (!add_char) {break;};
            }
            if (add_char){
                prefix += l;
            } else
            {
                break;
            };
        };
        return prefix;
    }
};