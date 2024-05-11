class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> d;
        for (auto v : paths){
            d[v[0]] = v[1];
        };
        string start = paths[0][0];
        while (true){
            if (d.find(start)==d.end()) break;
            start = d[start];
        };
        return start;
    }
};