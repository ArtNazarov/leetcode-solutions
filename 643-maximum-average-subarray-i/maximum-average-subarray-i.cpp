
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double s = 0;
        int cnt = 0;
        size_t sz = nums.size();
        double avg = INT_MIN;
        for (size_t i=0;i<sz;i++){
            s += nums[i];
            cnt++;
            if (cnt==k){
                avg = max(avg, s / k);
                s-= nums[i-k+1];
                cnt--;
            };
        };
        return avg;
    };
};