#include <map>
using namespace std;

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char, int> f;
        
        for(auto ch : s){
            f[ch]++;
        };

        map<char, int> ft;
        
        for(auto ch : target){
            ft[ch]++;
        };

        int cnt = INT_MAX;
        for(auto ch : target){
            int count = INT_MAX;
            if (ft[ch]!=0) count = f[ch]/ft[ch];
            cnt = min(count, cnt);
        };

        return cnt;

    }
};