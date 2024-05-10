class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> f;
        for (int x : deck) f[x]++;
        int n = 0;
        auto last = prev(f.end());
        for (auto it = f.begin();it!=f.end();it++) {
            n = gcd(n, it->second);
            if (n<=1) return false;
            
            if (last != it){
                n = gcd(n, last->second);
                if (n<=1) return false;
                last = prev(last);
            };
            if (last == it) break;
        };
        return n > 1;
    }
};