class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
                vector<int> res;
                for (int x = left; x<=right;x++){
                     bool isDiv = true;
                     int t = x;
                     while (t > 0){
                         int digit = t % 10;
                         if (digit == 0) { isDiv = false; break; };
                         isDiv = isDiv && (x % digit == 0);
                         t = t >> 1;
                        t/=5;
                    };
                    if (isDiv) res.push_back(x);
                };
              return res;
    }
};