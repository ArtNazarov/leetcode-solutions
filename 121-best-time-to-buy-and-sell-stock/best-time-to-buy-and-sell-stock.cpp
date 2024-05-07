#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
                int n = prices.size();
                int profit = 0;
                int minValue = prices[0];
                int p = 0;
                for (int i=1;i<n;i++){
                        p = prices[i] - minValue;
                        if(p > profit) profit = p ;
                        minValue = min(minValue, prices[i]);
                }
                return profit;
    }
};