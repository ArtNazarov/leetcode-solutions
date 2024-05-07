class Solution {
public:
string convertToTitle(int columnNumber) {
  const int count = int('Z') - int('A') + 1;
  string s = "";
  while (columnNumber > 0) {
    columnNumber -= 1;
    int dig = columnNumber % count;
    s.insert(0, 1, char(int('A') + dig) );
    columnNumber /= count;
  }
  return s;
}
};