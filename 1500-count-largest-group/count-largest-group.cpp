long long sumDigit(int n){
    int s = 0;
    while (n>0){
        s += n % 10;
        n = n >> 1;
        n /= 5;
    };
    return s;
} 

class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> m;
        for (size_t i=1;i<=n;i++){
            m[sumDigit(i)]++;
        };
        vector<int> groups;
        for(auto p : m){
            groups.push_back( p.second );
            // cout << p.first << endl;
            // for(auto x : p.second) cout << x << " "; cout << endl;
        };
        ranges::sort(groups);
        auto lw = lower_bound(groups.begin(), groups.end(), groups[groups.size()-1]); 
        return groups.end() - lw;
    }
};