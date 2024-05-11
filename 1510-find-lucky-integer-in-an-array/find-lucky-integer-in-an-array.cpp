class Solution {
public:
    int findLucky(vector<int>& arr) {
         
        map<int, int> f;
        for(auto e : arr) { f[e]++; };
        int mx = -1;
        vector<int> fx;
        for(auto x : f) fx.push_back(x.second);
        ranges::sort(fx);
        
        ranges::sort(arr);
        ranges::reverse(arr);
        for (auto x : arr){
            if (binary_search(fx.begin(), fx.end(), x) && f[x]==x) return x;
        }
        return -1;
    }
};