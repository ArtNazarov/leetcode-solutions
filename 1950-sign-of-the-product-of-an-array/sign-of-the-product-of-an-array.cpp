class Solution {
public:
    int arraySign(vector<int>& nums) {
        ranges::sort(nums);
        if (binary_search(nums.begin(), nums.end(), 0)) return 0;
        auto lw = lower_bound(nums.begin(),nums.end(), 0);
        int cnt = lw - nums.begin(); 
        return (cnt % 2 != 0) ? -1 : 1; 
    }
};