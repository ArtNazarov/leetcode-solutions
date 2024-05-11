class Solution {
public:
    int xorOperation(int n, int start) {
        int res = start;
        int index = 1;
        while (index < n){
            int t = index;
            t *= 2;
            int val = start;
            val += t;
            res = res ^ val;
            index++;
        };
        return res;
    }
};