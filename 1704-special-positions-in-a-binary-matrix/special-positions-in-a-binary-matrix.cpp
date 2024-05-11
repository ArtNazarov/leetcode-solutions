class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       vector<int> ones_row;
       size_t m = mat.size();
       size_t n = mat[0].size();
       for (size_t i=0;i<m;i++){
        int sum = 0;
        for (size_t j=0;j<n;j++){
            sum += mat[i][j];
        };
      //  cout << sum << endl;
        ones_row.push_back(sum);
       };
       // cout << "---" << endl;
       vector<int> ones_col;
       for (size_t j=0;j<n;j++){
        int sum = 0;
        for (size_t i=0;i<m;i++){
            sum += mat[i][j];
        };
       // cout << sum << endl;
        ones_col.push_back(sum);
       };
        
        int cnt = 0;
        for (size_t i=0;i<m;i++){
            for (size_t j=0;j<n;j++){
               // cout << mat[i][j] << "(" << ones_col[j] << "; " << ones_row[i] << ")" << endl;
              if (ones_col[j]-mat[i][j]==0 && ones_col[j] != 0 && ones_row[i] != 0 && ones_row[i]-mat[i][j]==0){
                    cnt++;
             };
            };
        };
        return cnt;
       

    }
};