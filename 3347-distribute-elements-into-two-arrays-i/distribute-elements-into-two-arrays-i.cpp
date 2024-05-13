#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1, arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i = 2; i<nums.size(); i++){
        int lastArr1 = arr1[arr1.size()-1];
        int lastArr2 = arr2[arr2.size()-1];
        if(lastArr1 > lastArr2){
            arr1.push_back(nums[i]);
        } else 
        {
            arr2.push_back(nums[i]);
        };
        };
        vector<int> res;
        copy(arr1.begin(), arr1.end(), back_inserter(res));
        copy(arr2.begin(), arr2.end(), back_inserter(res));
        return res;
    }
};