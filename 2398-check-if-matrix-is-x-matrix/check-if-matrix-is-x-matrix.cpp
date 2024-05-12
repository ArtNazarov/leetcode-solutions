#include <vector>
using namespace std;
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int sz = grid.size();
        auto isDiag2 = [sz](int i, int j) {return sz-1-i==j;};
        auto isDiag = [](int i, int j){ return i  == j; };
        for (int i=0;i<=sz/2;i++){
            for (int j=0;j<=sz/2;j++){
                if  (isDiag(i,j)|| isDiag2(i,j) )
                    {
                        if (grid[i][j] == 0) return false;
                        // use symmetr
                        if (grid[sz-i-1][j] == 0) {  return false; };
                        if (grid[sz-i-1][sz-1-j] == 0) {  return false; };
                        if (grid[i][sz-1-j] == 0) {  return false; };
                    } else {
                        if (grid[i][j] != 0) return false;
                        if (grid[sz-i-1][j] != 0) {  return false; };
                        if (grid[sz-i-1][sz-1-j] != 0) {  return false; };
                        if (grid[i][sz-1-j] != 0) {  return false; };
                    };
            };
        };
        return true;
    }
};