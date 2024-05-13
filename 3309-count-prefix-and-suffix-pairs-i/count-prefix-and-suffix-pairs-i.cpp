#include <vector>
using namespace std;

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        vector<string>& s = words;
        int sz = s.size();
        int cnt = 0;
        
        for(auto i=0;i<sz-1;i++){
            for(auto j=i+1;j<sz;j++){
                int ps1 = s[j].find(s[i]);
                int ps2 = s[j].rfind(s[i]);
                 
                bool flag = ps1==0 && ps2 == s[j].size()-s[i].size();
                
                if (flag) cnt++;
            };
        };
        return cnt;
    }
};