class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int sumLeft = 0;
        int sumRight = 0;
        for (auto e : nums){
            sumRight += e;
        };
        size_t sz = nums.size();
        for(size_t i=0; i< sz; i++){
            sumRight -= nums[i];
          //  cout << "sumLeft = " << sumLeft << " " << sumRight << endl;
            if (sumLeft == sumRight) return i;
            sumLeft += nums[i];
        };
        return -1;
    }
};