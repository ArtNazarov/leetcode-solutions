bool isTria(int a, int b, int c){
    return ((a+b) > c && (b + c) > a && (a + c) > b);
}

 


class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        ranges::sort(nums.begin(),nums.end(), [](auto a, auto b){return a > b;});
        
        int mx = INT_MIN;
        for(int i=0;i<nums.size()-2; i++){
            int P = nums[i]+nums[i+1]+nums[i+2];
            if (P<=mx || !isTria(nums[i], nums[i+1], nums[i+2])) continue;
            mx = max(P, mx);
        }
        return  (mx == INT_MIN) ? 0 : mx; 
    }
};