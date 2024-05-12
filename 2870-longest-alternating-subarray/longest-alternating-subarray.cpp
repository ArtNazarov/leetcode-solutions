#include <vector>
using namespace std;

vector<int> getSubArray(vector<int>& nums, int i, int m){
    vector<int> sel;
    if (i<nums.size()) {
      
        int index = i;
        int cnt = 0;
        while (index < nums.size()){
            sel.push_back(nums[index]);
            index++;
            if (sel.size()==m) break;
        };
    };
    return sel;
}


bool testArray(vector<int>& sel){
    bool ok = true;
    bool checkMore = true;
    for (int i=0; i<sel.size(); i++){
        if ((i < sel.size() - 1) && checkMore){
            ok = ok && sel[i]+1 == sel[i+1];
        };
        if ((i < sel.size() - 1) && !checkMore){
            ok = ok && sel[i]-1 == sel[i+1];
        };
        checkMore = !checkMore;
    };
    return ok;
}

class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int max_m = nums.size();
        for(auto m=max_m; m>=2; m--){
            int r = nums.size()-m+1;
            for (auto i=0; i<r;i++){
                vector<int> sel = getSubArray(nums, i, m);
                if (testArray(sel)) return m;
            };
        };
        return -1;
    }
};