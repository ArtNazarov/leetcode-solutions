#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minSize = strs[0].size();
        for (const auto& s  : strs){
                minSize = min((int)s.size(), minSize);        
        };
        string prefix = "";
        for (int i=0;i<minSize;i++){
            bool add_char = true;
            char l = strs[0][i];
            for (const auto& s : strs){
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