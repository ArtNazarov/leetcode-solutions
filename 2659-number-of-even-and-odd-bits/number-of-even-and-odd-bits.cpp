#include <vector>
using namespace std;

class Solution {
public:
    vector<int> evenOddBit(int n) {
            int even = 0;
            int odd = 0;
            int index = 0;
            while (n>0){
            
                int digit = n % 2;
                
                n/=2;
                if (digit == 1 && index % 2 == 0){
                    even++;
                } else if (digit == 1 && index % 2 != 0) {
                odd++;
                };
                if (n==0) break;
                index++;
            };
        vector<int> result = {even, odd};
        
        return result; 
    }
};