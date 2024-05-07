class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> first_row = {1};
        vector<int> second_row = {1, 1};
        vector<vector<int>> rows;
        rows.push_back(first_row);
        rows.push_back(second_row);
        for (int i=2; i<=numRows;i++){
            rows.push_back(vector<int>(i+1));
            rows[i][0] = 1;
            rows[i][rows[i].size()-1] = 1;
            for (int j=1; j<i; j++){
                rows[i][j] = rows[i-1][j-1]+rows[i-1][j];
            };
        };
        rows.erase(rows.end()-1, rows.end());
        return rows; 
    }
};