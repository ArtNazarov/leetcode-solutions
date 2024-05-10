class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        ranges::sort(nums.begin(), nums.end(), [](auto a, auto b)  {
            if (a % 2 == 0 && b % 2 == 0) {
                return a < b;
            } else if (a % 2 != 0 && b % 2 != 0){
                return a < b;
            } else if ( b % 2 != 0) {
                 return a % 2 == 0;
            } else {
                return !(b % 2 == 0);
            };
        });
        return nums;
    }
};