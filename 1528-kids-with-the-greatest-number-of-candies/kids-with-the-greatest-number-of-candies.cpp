class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        vector<int> sum(candies.size());
        
            
        for (size_t i=0;i<candies.size();i++){
            sum = candies;
            sum[i] = candies[i] + extraCandies;
            int v = sum[i];
            ranges::sort(sum);
            ranges::reverse(sum);
            res.push_back(sum[0] == v);
            };    
        return res;
    }
};