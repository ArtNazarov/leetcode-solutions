// pattern for combinations
#include <vector>
#include <algorithm>
using namespace std;
// counter
void doCount(vector<int>& v, int& counter){
    if (v[0] + v[1] + v[2] == v[3]) {
        counter ++;
    }
}

// pass void function as argument and counter
void generateCombinations(vector<int>& nums, vector<int>& current, int index, int k,
void (*process)(vector<int>&, int& counter), int& counter
) {
    if (current.size() == k) {
        process(current, counter);
        return;
    }

    for (int i = index; i < nums.size(); ++i) {
        current.push_back(nums[i]);
        generateCombinations(nums, current, i + 1, k, process, counter);
        current.pop_back();
    }
}

class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        int counter = 0;
        vector<int> comb;
        generateCombinations(nums, comb, 0 , 4 , doCount , counter );
        return counter;
    }
};