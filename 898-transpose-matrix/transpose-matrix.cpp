class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> g(matrix[0].size(), vector<int>(matrix.size()));
        for (size_t i=0;i<matrix.size();i++){
            for (size_t j=0;j<matrix[0].size();j++){
              g[j][i] = matrix[i][j];
            };
        };
        return g;
    }
};