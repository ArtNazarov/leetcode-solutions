class Solution {
public:
    int maxPower(string s) {
        char z = '\t';
        int mx = 1;
        int p = 0;
        for (auto ch : s){
            if (ch == z){
                p++;
                if (p>mx) mx = p;
            } else {
                p = 1;
                z = ch;
            };
        };
        return mx;    
    }
};