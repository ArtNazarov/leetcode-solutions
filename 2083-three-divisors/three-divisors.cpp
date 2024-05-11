int cntDiv(int n){
    int cnt = 2; // n and 1
    int x = 2;
    while (x*x <= n){
        if (n % x == 0){
            cnt++;
            int v = n / x;
            if (v!=x) cnt++;
        };
        x++;
    };
    // cout << cnt << endl;
    return cnt;
}

class Solution {
public:
    bool isThree(int n) {
        return cntDiv(n) == 3;
    }
};