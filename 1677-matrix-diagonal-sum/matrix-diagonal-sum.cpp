class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        int mid = (n-1) / 2;
        if (n % 2 == 0) mid++;
        for (size_t i = 0; i < n; i++){
            sum += mat[i][i];
            if (n % 2 !=0 )  {
                if (i != mid) sum+=mat[n-i-1][i];
            } else sum+=mat[n-i-1][i];
        };
        return sum;
    }
};