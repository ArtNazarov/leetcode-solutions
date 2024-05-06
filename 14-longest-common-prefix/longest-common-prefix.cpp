#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const int MAX_L = 200;  
        int sz = strs.size();
        string prefix = "";
        int sz_1 = strs[0].size();
        for (int i=0;i<=sz_1;i++){
           
            int add_char = 0;
           
            char l = strs[0][i];
            for (const auto& s : strs){
                if (i >= s.size()) {add_char = 0; break;};
                if (s[i] == l) add_char ++;
            }
            if (add_char == sz){
                prefix.insert(prefix.end(), l);
            } else {
                break;
            }
        };
        return prefix;
    }
};