#include <vector>
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> nrows;
        vector<int> ncols;
        int cols = matrix[0].size();
        int rows = matrix.size();
        for (auto i = 0; i<rows; i++){
            for (auto j = 0; j<cols;j++){
                if (0 == matrix[i][j]){
                    nrows.push_back(i);
                    ncols.push_back(j);
                };
            };   
        };
        int szrows = nrows.size();
        for (auto x = 0;  x<szrows; x++){
            int rownum = nrows[x];
            for (auto j=0;j<cols;j++){
                matrix[rownum][j] = 0;
            };
        };

        int szcols = ncols.size();
        for (auto y = 0;  y<szcols; y++){
            int colnum = ncols[y];
            for (auto i=0;i<rows;i++){
                matrix[i][colnum] = 0;
            };
        };
    }
};