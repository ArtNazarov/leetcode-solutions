class Solution {
public:
    int differenceOfSums(int n, int m) {
      int s1 = 0;
      int s2 = 0;
      for(int x = 1 ; x <= n; x++){
        if (x % m == 0) s2+=x; else s1+=x;
      };
      // cout << s1 << " " << s2 << endl;
      return s1 - s2;
    }
};