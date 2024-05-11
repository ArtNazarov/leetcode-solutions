class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> v(n+1);
        if (n>=1) v[0] = 0;
        if (n>=2) v[1] = 1;
        if (n==1) return 1;
        for (size_t i = 2; i<n+1; i++){
            size_t t = i >> 1;
            if (i % 2 == 0) v[i] = v[t]; else v[i] = v[t]+v[1+t];
        };
        // for(auto x : v) cout <<  " " << x; cout << endl;
        ranges::sort(v);
        return *prev(v.end());
    }
};