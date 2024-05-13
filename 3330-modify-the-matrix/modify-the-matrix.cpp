#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
         
        vector<vector<int>> res(matrix);
        size_t colCount = res[0].size();
        size_t rowCount = res.size();
       
        for (size_t col=0; col<colCount; col++){
                size_t indexMinus  = 0;
                bool findMinus = false;
                 size_t indexMax = 0;
                for (size_t row=0;row<rowCount; row++){
                    if (res[row][col] == -1){
                        indexMinus = row;
                        findMinus = true;
                    };
                    if (res[row][col]>res[indexMax][col]){
                        indexMax = row;
                    };
                };
              if (findMinus) {
                 int maxValue = res[indexMax][col];
                 for (size_t row = 0;row<rowCount;row++){
                    if (res[row][col] == -1) res[row][col] = maxValue;
                 }
              } 
        };
        return res;
    }
};