class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        size_t k = nums.size();
        vector<int> res(k);
        size_t index = 0;
        for (size_t j = 0; j <= n; j++){
        for (size_t i = 0; i <= k/n; i++){
            size_t f = i * n + j;
            if (f < k && index < k)
            res[index++] = nums[f];
        }
        }
        
        return res;
    }
};