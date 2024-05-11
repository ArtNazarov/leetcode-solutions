class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> f;
        for (auto x : edges){
            f[x[0]]++;
            f[x[1]]++;
        };
        int res = -1;
        for (auto n : f){
            if (n.second == (edges.size())) {res = n.first; break;}
        };
        return res;
    }
};