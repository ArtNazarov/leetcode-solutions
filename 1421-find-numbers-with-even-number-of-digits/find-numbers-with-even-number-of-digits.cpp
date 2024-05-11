class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_digits = 0;
        for (auto e : nums){
            int t = e; int digits = 0;
            while (t>0) { digits++; t = t >> 1; t/=5; };
            if (digits%2==0) {  even_digits++; };
        };
        return even_digits;
    }
};