#include <bitset>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> grayCode(int n) {
        int max_val = 1;
        for (int i=1;i<=n-1;i++){
            max_val = 2 * max_val + 1;
        };
        vector<int> res;
        int b = 0;
        int cnt = 0;
        do {
            int g = b ^ (b >> 1);
            res.push_back(g);
            b++;
        } while (b <= max_val);
        return res;
    }
};