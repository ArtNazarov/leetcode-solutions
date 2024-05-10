// rolling sum
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        int si = (int) cost.size()-3;
        for(auto i=si; i>=0; i--){
            if (i >= 0 && i + 2 < cost.size())
            cost[i] += min(cost[i+1] , cost[i+2]);
        };
        /*
        for (auto c : cost){
            cout << c << " ";
        };
        cout << endl;
        */
        return min(cost[0], cost[1]);
    }
};