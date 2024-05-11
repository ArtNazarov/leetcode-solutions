class Solution {
public:
    int getLucky(string s, int k) {
        vector<int> v;
        for(auto ch : s){
            int val = ch-'a';
            int x = val+1;
            // cout << x << " ";
            while (x>0){
                v.push_back(x % 10);
                 
                x = x >> 1;
                x /= 5;
            };
            // cout << endl;
        };
        int n = 0;
        for(auto i=0;i<k;i++){
            n = 0;
            for(auto val : v){
                // cout << val << " ";
                n += val;
            };
            // cout << " |";
            // cout << n << endl;
            v.clear();
            if (i==k-1) break;
            while (n>0){
                v.push_back(n % 10);
                n /= 10;
            };
        };
        return n;
    }
};