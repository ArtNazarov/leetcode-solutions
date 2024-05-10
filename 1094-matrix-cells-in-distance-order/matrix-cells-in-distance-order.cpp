// Using pair
double dist(pair<int, int>& p1, pair<int, int>& p2){
    double dx = abs( p1.first - p2.first );
    double dy = abs( p1.second - p2.second );
    return dx + dy;
}

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        pair<int, int> pC = make_pair(  rCenter, cCenter  );
        vector<pair<pair<int, int>, double>> g(rows *cols);
        int index = 0;
        for (int i=0; i<rows;i++){
            for (int j=0;j<cols;j++){
                pair<int, int> p = make_pair( i, j );
                auto d = dist(p, pC);
                auto x = make_pair(p, d);
                g[index] = x;
                index++;
            };
        };
        sort(g.begin(), g.end(), [](auto a, auto b){ return a.second <= b.second;});
        vector<vector<int>> res;
        for (auto e : g){
            vector<int> v = {e.first.first, e.first.second};
            res.push_back(v);
        };
        return res;
        
    }
};