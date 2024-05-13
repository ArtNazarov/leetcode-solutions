class Solution {
public:
    int countKeyChanges(string s) {
        int sz = s.size();
        if (sz<=1) return 0;
        int cnt = 0;
        for (size_t i=1;i<sz;i++){
            if (tolower(s[i])!=tolower(s[i-1])) cnt++;
        };
        return cnt;
    }
};