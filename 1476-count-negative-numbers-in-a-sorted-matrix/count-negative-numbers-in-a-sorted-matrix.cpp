class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(auto v : grid){
            
            ranges::reverse(v);
            auto  it = lower_bound(v.begin(), v.end(), 0);
            cnt += (it - v.begin());
           
        };
        return cnt;
    }
};