class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for (auto e : nums){
            sum1+=e;
            auto t = e;
            while (t > 0) {sum2+=t%10;t = t >> 1; t/=5;};
        };
        return abs(sum1-sum2);
    }
};