#include <vector>
class Solution {
public:
    int reverse(int x) {
         
        
            int sign = 1;  
            if(x < 0){
                sign = -1;
                if (x <= INT_MIN) {
                    return 0;
                };
                x = -x;
            };
            
    const int MAX_DIGITS = 10;
    vector<int> f(MAX_DIGITS);
    float max = 1.0;
    for (int d=0;d<MAX_DIGITS;d++){
        max *= 10;
    };
    
    
        
    int cnt = 0;
    int temp = x;
    int d = 0;
    while (temp > 0){
        cnt += 1;
        f[d] = temp % 10;
        temp/=10;
        d++;
    };
    
    int m = 1;
    for (int q=1;q<cnt;q++){
        m *= 10;
    }
    
    int res = 0;
    for (int d=0;d<cnt;d++){
        long long temp =(long long) f[d] * (long long) m;
        if (temp > INT_MAX) return 0;
        if ( (temp + (long long) res) > INT_MAX ) {
            return 0;
        };
        res +=  (int) temp;
        
        m/=10;
    };
 
  
  return res * sign;
        
    }
};