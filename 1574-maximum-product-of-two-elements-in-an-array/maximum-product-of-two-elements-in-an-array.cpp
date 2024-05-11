class Solution {
public:
    int maxProduct(vector<int>& nums) {
        ranges::sort(nums);
        int i = nums.size()-1;
        int j = i - 1;
        return (nums[i]-1)*(nums[j]-1);   
    }
};