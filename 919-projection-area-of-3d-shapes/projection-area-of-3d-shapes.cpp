class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int cnt = 0;
        for (size_t i=0;i<grid.size();i++){
            for (size_t j=0;j<grid[0].size();j++){
                if (grid[i][j]>0) cnt++;
            };
        };
        int s1 = 0;
        for (size_t i=0;i<grid.size();i++){
            vector<int> v = grid[i];
            ranges::sort(v.begin(), v.end(), greater<int>() );
            s1 += v[0];
        };
        int s2 = 0;
        for (size_t j=0;j<grid[0].size();j++){
            int mx = 0;
            for (size_t i=0;i<grid.size();i++) mx = max(mx, grid[i][j]);
            s2 += mx;

        };
        return s1 + s2 + cnt;
    }
};