int elemP(vector<vector<int>>& g, int i, int j){
    int p = 4;
    if (i>0){
        if (g[i-1][j]==1) p--;
    };
    if (i<g.size()-1){
        if (g[i+1][j]==1) p--;
    };
    if (j<g[0].size()-1){
        if (g[i][j+1]==1) p--;
    };
    if (j>0){
        if (g[i][j-1]==1) p--;
    };
    return p;
}

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p = 0;
        int sz = grid.size();
        for (int i=0;i<sz;i++){
            for (int j=0;j<grid[0].size();j++){
                if (grid[i][j]==1) p+=elemP(grid, i, j);
            };
        };
        return p;
    }
};