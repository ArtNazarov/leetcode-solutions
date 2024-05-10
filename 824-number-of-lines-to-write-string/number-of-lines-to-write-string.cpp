class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        const int mx = 100;
        vector<int> res = { 0, 0 };
        int ln = 0;
        int cnt = 0;
        for(auto ch : s){
            char code = ch-'a';
            ln += widths[code];
            if (ln > mx){
                ln = widths[code];
                cnt ++;
            } if (ln == mx){
                ln = 0;
                cnt++;
            };

        };
        res = { cnt + 1, ln};
        if (res[1]==0 && res[0]>0) {res[0]--; res[1]=100;};
        return res;
    }
};