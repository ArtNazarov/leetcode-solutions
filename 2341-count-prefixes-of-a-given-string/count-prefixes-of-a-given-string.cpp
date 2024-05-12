#include <vector>
using namespace std;
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        vector<string> prefixes;
        string pf = ""; 
        for (int i=0;i<s.size();i++){
            pf+=s[i];
            prefixes.push_back(pf);
        };
        for (auto w : words){
            for (auto pf : prefixes){
                if (w == pf) cnt++;
            };
        };
        return cnt;
    }
};