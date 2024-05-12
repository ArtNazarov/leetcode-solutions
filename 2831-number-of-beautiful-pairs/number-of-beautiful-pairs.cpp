#include <vector>
using namespace std;

int myGcd(int x, int y){
    while (x > 0 && y > 0){
        if (x > y) {
            x = x % y;
        } else {
            y = y % x;
        };
    };
    return max(x, y);
}

bool areCoprime(int x, int y){
    // cout << "gcd " << x << " " << y << " = " << t << endl;
    return  myGcd(x, y) == 1;
}

int fd(int x){
    return to_string(x)[0]-'0';
}

int ld(int x){
    return x % 10;
}

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
         
        int cnt = 0;
        for(int i = 0; i<nums.size()-1; i++){
            int x = fd(nums[i]);
            for(int j=i+1; j<nums.size(); j++){
                int y = ld(nums[j]);
                // cout << x << " " << y << endl;
                cnt+= areCoprime(x, y) ? 1 : 0;
            };
        };
        return cnt;
    }
};