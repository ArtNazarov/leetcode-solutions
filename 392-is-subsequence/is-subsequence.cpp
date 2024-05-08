 
using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int good = 0;
        int j = 0;
        int sz = s.size();
        int szT = t.size();
        for(int i=0;i<sz;true){
            if (i>=sz) break;
            if (j>=szT) break;
            if (s[i]==t[j]){
                i++;
                j++;
                good++;
            } else {
                j++;
            };
        };
        return (good == sz);
    }
};