void print_coord(int i, int j){
       char ch = 'a'+j;
       // cout << ch << " " << 8-i << endl;
}

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int px = INT_MIN;
        int py = INT_MIN;
       for (int i=0;i<board.size();i++){
        for (int j=0;j<board[0].size();j++){
            if ('R' == board[i][j]){
                   px = i;
                   py = j;
                  break; 
            };
        };
        if (px != INT_MIN) break;
       };
      //  cout << "The rook at "; print_coord(px, py);
       vector<vector<int>> steps = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        int cnt = 0;
       for (auto step : steps){
            int x = px; int y = py;
            bool next = false;
            while (x >= 0 &&  x < 8 && y>=0 && y<8) {
                x += step[0];
                y += step[1];
                if (x >= 0 &&  x < 8 && y>=0 && y<8 ){
                    if (board[x][y]=='p'){
                     //    cout << "The black pawn at "; print_coord(x, y);
                        cnt++; next = true; break;
                    };
                    if (board[x][y]=='B'){
                     //   cout << "The white bishop at "; print_coord(x, y);
                        next = true; break;
                    };
                };    
                  if (next) break;
            };
          
       } ;
       return cnt;
    }
};