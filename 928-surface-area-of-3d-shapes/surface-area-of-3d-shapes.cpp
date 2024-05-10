class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int cnt = 0;
        for (auto v : grid){
            for (auto x : v){
                if (x > 0) cnt++;
            };
        };
        int sz = (int) grid.size();
        int s1 = 0;
        for (int i=0;i<sz;i++){
            int s = grid[i][0] + grid[i][sz-1];
            for (int j=1;j<sz;j++){
                s+=abs(grid[i][j]-grid[i][j-1]);
            };
            s1 += s;
        };
        int s2 = 0;
        for (int j=0;j<sz;j++){
            int s = grid[0][j] + grid[sz-1][j];
            for (int i=1;i<sz;i++){
                s+=abs(grid[i][j]-grid[i-1][j]);
            };
            s2 += s;
        };
        return 2 * cnt + s1 + s2;
    }
};