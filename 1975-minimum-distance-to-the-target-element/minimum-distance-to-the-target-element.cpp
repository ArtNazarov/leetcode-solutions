// using vector of indices
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        vector<int> ix(nums.size());
        iota(ix.begin(), ix.end(), 0);
        
        sort(ix.begin(), ix.end(), [&nums, &target, &start](auto a, auto b){
            return abs(a-start)<abs(b-start) && nums[a]==target;
        });

        int min_diff = INT_MAX;
        for(int i=0;i<ix.size();i++){
            if (nums[ix[i]]==target) {
                min_diff = abs(ix[i]-start);
                break;
            };
        };

       
       return min_diff; 
    }
};