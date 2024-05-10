class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cur_L = 1;
        int max_L = 1;
        size_t sz =  nums.size();
        if (sz > 1){
        for (size_t i = 0; i < sz - 1; i++) {
            
            if ((i + 1) < sz ) {
                if (nums[i + 1] <= nums[i]) {
                    cur_L = 1;
                } else {
                    cur_L++;
                    max_L = max(cur_L, max_L);
                };
            };
            if (nums.size()-i < max_L & cur_L < max_L) break;
        };
        };
        return max_L;
    }
};