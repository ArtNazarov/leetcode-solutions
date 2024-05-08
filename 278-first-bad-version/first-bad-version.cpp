// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int x = 1;
        // x - some bad version
        int last_x = 1;
        while (!isBadVersion(2*x) &&  x > 2) {
            last_x = x;
            x = x >> 1; 
        };

        x = last_x;
       int y = n;
       int last_y = n;
       while (isBadVersion(y) && y > x){
          last_y = y; 
          y = y >> 1;
       };
       int res;
       int a = min(last_x, last_y); cout << a << endl;
       int b = max(last_x, last_y); cout << b << endl;
       for (int i=a; i<=b; i++){
        if (isBadVersion(i)){
            res = i;
            break;
        };
       }
       return res;

    }
};