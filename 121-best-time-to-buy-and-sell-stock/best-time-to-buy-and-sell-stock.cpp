#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
                
                int profit = 0;
                int minValue = *(prices.begin());
                int p = 0;
                for(auto it=next(prices.begin()); it != prices.end(); it++){
                        p = *it - minValue;
                        if(p > profit) profit = p ;
                        minValue = min(minValue, *it);
                }
                return profit;
    }
};