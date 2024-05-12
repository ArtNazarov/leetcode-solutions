#include <vector>
using namespace std;

int getMax(vector<vector<int>>& g, int a, int b){
    int mx = g[a][b];
    for (auto i = a; i<a+3; i++ ){
        for(auto j=b;j<b+3; j++){
            mx = max(mx, g[i][j]);
        };
    };
    return mx;
}

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
       vector<vector<int>> u;
       for(int i=0;i<grid.size()-2; i++){
        vector<int> v;
          for(auto j=0;j<grid.size()-2; j++){
            v.push_back(getMax(grid, i, j));
        };  
        u.push_back(v);
       };
       return u;
    }
};