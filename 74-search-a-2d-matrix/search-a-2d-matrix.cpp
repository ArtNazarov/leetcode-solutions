// using binary search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int sz = matrix.size();
         

        while (matrix.size()>0){
            int i = rand() % matrix.size();
            bool f = binary_search(matrix[i].begin(), matrix[i].end(), target);
            if (f) {return true;}
            matrix.erase(matrix.begin()+i);
        };
        return false; 
    }
};