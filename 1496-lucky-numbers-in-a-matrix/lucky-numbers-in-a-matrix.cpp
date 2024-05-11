#include <vector>
using namespace std;
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> mx;
        vector<int> mn;  
        vector<int> res;
        for (size_t j = 0; j < matrix[0].size(); j++){
            int t = matrix[0][j];
            for(size_t i = 0; i < matrix.size(); i++){
                if (t < matrix[i][j]){
                t = matrix[i][j];
                };
                
            };
            mn.push_back( t );
        //  cout << t << " ";
            
        };

        // cout << endl;
        
        for (size_t i=0;i<matrix.size();i++){
            int q = matrix[i][0];
            for (size_t j=0;j<matrix[0].size();j++){
            if (q > matrix[i][j]){
                q = matrix[i][j];
            };
            }
            mx.push_back(q);
            // cout << q << " ";
            }

        // cout << endl;
        
        for(size_t i=0;i<matrix.size();i++){
            for (size_t j=0;j<matrix[0].size();j++){
            if (matrix[i][j] == mx[i] && matrix[i][j]==mn[j]){
                res.push_back(matrix[i][j]);
            }
            }
        };

        return  res; 
    }
};