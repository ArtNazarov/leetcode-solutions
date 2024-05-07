class Solution {
public:
string convertToTitle(int columnNumber) {
  const int count = int('Z') - int('A') + 1;
  string s = "";
  while (columnNumber > 0) {
    columnNumber -= 1;
    int dig = columnNumber % count;
    s = char(int('A') + dig) + s;
    columnNumber /= count;
  }
  return s;
}
};