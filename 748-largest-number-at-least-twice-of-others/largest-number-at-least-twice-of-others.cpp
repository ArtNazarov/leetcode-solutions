class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> ix(nums.size());
        iota(ix.begin(), ix.end(),0);
        ranges::sort(ix.begin(), ix.end(), [&nums](auto i, auto j){return nums[i]>nums[j];});
        int largest = nums[ix[0]];
        return (largest >= 2 * nums[ix[1]]) ? ix[0] : -1;
    }
};