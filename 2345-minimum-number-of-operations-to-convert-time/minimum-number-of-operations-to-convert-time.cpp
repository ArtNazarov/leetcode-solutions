// using timestamp

int getTimestamp(string& s){
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    int t = h * 60 + m;
    return t;
}

class Solution {
public:
    int convertTime(string current, string correct) {
      int d = abs(getTimestamp(current)-getTimestamp(correct));  
      int x = d / 60;
      int y = (d % 60) / 15;
      int z = ((d % 60) % 15) / 5;
      int v = ((d % 60) % 15) % 5;
      return x + y + z + v;
    }
};