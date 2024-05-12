#include <ranges>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        string s = to_string(num);
        ranges::sort(s);
        for(auto i = 1; i<=9; i++){
            if (num % i == 0){
                auto it1 = lower_bound(s.begin(), s.end(), '0'+i);
                auto it2 = upper_bound(s.begin(), s.end(), '0'+i);
                
                cnt+=it2 - it1;
            };
        };
        
        return cnt;
    }
};