class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size()<3) return 0;
        int cnt = 0;
        for(size_t i=0; i<s.size()-2;i++){
            string t = s.substr(i, 3);
            sort(t.begin(), t.end());
            t.erase(unique(t.begin(), t.end()), t.end());
            if (t.size()==3) cnt++;
        };
        return cnt;
    }
};