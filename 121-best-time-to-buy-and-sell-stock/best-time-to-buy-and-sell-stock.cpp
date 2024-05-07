#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
                int n = prices.size();
                int profit = 0;
                int minValue = prices[0];
                int p = 0;
                int i = 0;
                while (i<n){
                        p = prices[i] - minValue;
                        if(p > profit) profit = p ;
                        minValue = min(minValue, prices[i]);
                        if (i + 1 < n && prices[i]!=prices[i+1]) {
                            i++;
                        } else if ( i + 1 < n) {
                            while (i + 1 < n && prices[i]==prices[i+1]) i++;
                        } else {
                            i++;
                        }
                }
                return profit;
    }
};