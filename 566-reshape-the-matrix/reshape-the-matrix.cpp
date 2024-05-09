class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       
        vector<int> alls;
        int m = mat.size();
        int n = mat[0].size();
        // by condition
         if (r*c!=n*m) return mat;
        for (auto i=0;i<m;i++){
            for (auto j=0;j<n;j++){
                alls.push_back(mat[i][j]);
            };
        };
        int index = 0;
      
        
        vector<vector<int>> res(r, vector<int>(c));
         for (int i=0; i<res.size();i++){
             for (int j=0; j<res[0].size();j++){
                
                if (index < alls.size()) res[i][j] = alls[index];
                index++;
            };
           
        };
        
        if (res.size()==0 || res[0].size()==0) return mat;
        return res;
    }
};