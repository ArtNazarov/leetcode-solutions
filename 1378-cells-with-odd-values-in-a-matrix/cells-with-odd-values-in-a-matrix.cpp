// With subroutines
void incCol(vector<vector<int>>& g, int c){
    for (int i=0;i<g.size();i++){
        g[i][c]++;
    };
};

void incRow(vector<vector<int>>& g, int r){
    for (int j=0;j<g[0].size();j++){
        g[r][j]++;
    };
};

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
      vector<vector<int>> x( m, vector<int> (n));  
      for (auto v : indices){
        incCol(x, v[1]); incRow(x, v[0]);
      };

     

      int cnt = 0;
      for(auto r : x){
        for (auto v : r){
           // cout << v << " ";
            if (v % 2 != 0) cnt++;
        };
        // cout << endl;
      };
      return cnt;
    }
};