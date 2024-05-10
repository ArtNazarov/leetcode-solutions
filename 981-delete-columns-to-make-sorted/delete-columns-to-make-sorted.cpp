#include <vector>
using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int rowCount = strs.size();
        int colCount = strs[0].size();
        int counter = 0;
        bool isSorted;
        for (int col=0;col<colCount;col++){
            isSorted = true;
            for (int row = 0; row<rowCount-1;row++){
                isSorted = strs[row][col] <= strs[row+1][col];
                if (!isSorted) { 
                    counter ++; 
                    break;  
                    };
            };
        };
        return counter;
    }
};