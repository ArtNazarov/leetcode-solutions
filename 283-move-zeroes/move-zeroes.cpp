class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ix;
        size_t index = 0;
        for (auto x : nums){
            if (x!=0) ix.push_back(index);
            index++;
        };
        size_t pos = 0;
        auto itN = nums.begin();
        for (auto it = ix.begin(); it != ix.end(); it++){
            *itN = *(nums.begin() + *it);
            itN++;
        };
        for (auto i=ix.size(); i<nums.size();i++){
            nums[i] = 0;
        };
    }
};