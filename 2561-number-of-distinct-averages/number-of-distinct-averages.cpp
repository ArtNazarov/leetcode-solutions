#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float> st; 
        sort(nums.begin(), nums.end());
        do {
            if (nums.size()==0) break;
            if (nums[0] == nums[nums.size()-1]){
                st.insert(nums[0]);
                nums.erase(nums.begin());
            } else if (nums.size()>=2){
                float a = nums[0];
                float b = *(nums.end()-1);
                float avg = (a + b) / 2;
                st.insert(avg);   
                nums.erase(nums.begin());
                nums.erase(nums.end()-1);     
            };
        } while (nums.size()!=0);
        return st.size();
    }
};