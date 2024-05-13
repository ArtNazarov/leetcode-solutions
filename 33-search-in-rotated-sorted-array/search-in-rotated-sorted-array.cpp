class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = 0;
        int rindex = nums.size()-1;
        for (int x : nums){
            if (x == target) return index;
            if (rindex >= 0 && nums[rindex]==target) return rindex;
            if (rindex - index + 1 > 0){
                int rand_index = index + rand() % (rindex - index + 1);
                if (rand_index < nums.size() && nums[rand_index]==target) return rand_index;
                };
            if (index > (nums.size() >> 1)) break;
            index++;
            rindex--;
        };
        return -1;
    }
};