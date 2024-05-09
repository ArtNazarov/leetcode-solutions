class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int in_x = INT_MAX;
        int in_y = INT_MAX;
        int cnt = m * n;
        if (ops.size()>0){
            in_x = ops[0][0];
            in_y = ops[0][1];
        };
        for (auto op : ops){
            in_x = min(in_x, op[0]);
            in_y = min(in_y, op[1]);
        };
        if (!(in_x == INT_MAX || in_y == INT_MAX)) return  in_x * in_y;
        return cnt;
    }
};