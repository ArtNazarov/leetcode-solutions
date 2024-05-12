// using ceil and floor
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        const int MAX = 100;
        int x = ceil((double) purchaseAmount / 10) * 10;
        int y = floor((double) purchaseAmount / 10) * 10;
        int chosen = y;
        if (abs(x - purchaseAmount)<=abs(y - purchaseAmount)){
            chosen = x;
        }
        return MAX-chosen;
    }
};