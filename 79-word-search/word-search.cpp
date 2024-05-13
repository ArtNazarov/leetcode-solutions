#include <vector>
using namespace std;

class Solution {
public:
     
bool find_substr(const string& str, int index, const vector<vector<char>>& v, int i, int j, const int rowCount, const int colCount,  vector<vector<bool>>& visited){
  // cout << "Check " << v[i][j] << endl;
  if (str[index] != v[i][j]) {  return false; };
  if (visited[i][j] ) {  return false; };
  
 

  visited[i][j] = true;
  
  
  if (index >=0 && index < str.size()) {
    bool char_ok =  str[index] == v[i][j];
    
    //if (char_ok) {cout << "CHAR OK" << endl;};
    
    if (char_ok && index == (str.size()-1)) { visited[i][j] = false;   return true; };
    bool up = false;
    
    if (i>0 && index < str.size()) { up = find_substr(str, index+1, v, i-1, j, rowCount, colCount, visited); };
    bool dn = false;
    if (i<(rowCount-1) && index < str.size() ) {
      dn = find_substr(str, index+1, v, i+1, j, rowCount, colCount, visited);
    };
    bool lt = false;
    if (j>0 && index < str.size() ) {
    lt = find_substr(str, index+1, v, i, j-1, rowCount, colCount, visited);
    };
    bool rt = false;
    if (j<(colCount-1) && index < str.size()) {
      rt = find_substr(str, index+1, v, i, j+1, rowCount, colCount, visited);
    };
    visited[i][j] = false;
    return ( up || dn || rt || lt ) && char_ok;
  };
  visited[i][j] = false;
  return false;
}

bool exist(vector<vector<char>>& board, string word) {
 

 vector<vector<bool>> visited = vector<vector<bool>>(board.size(), vector<bool>(board[0].size(), false));
  
  bool flag = false;
  int rowCount = board.size();
  int colCount = board[0].size();
  for (int i=0; i<rowCount;i++){
    for (int j=0;j<colCount;j++){
       
      if (board[i][j] == word[0]) flag = flag || find_substr(word, 0, board, i, j, rowCount, colCount, visited);
    };
  };
  return flag;
}
};