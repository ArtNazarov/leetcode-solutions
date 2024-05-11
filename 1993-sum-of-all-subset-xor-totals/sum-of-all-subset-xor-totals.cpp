// Using pattern to get combinations
// counter
void doCount(vector<int>& v, int& counter){
    // for(auto x : v) cout << " " << x; cout << endl;
    int z = v[0];
    for(auto i=1;i<v.size();i++) z = z ^ v[i];
    // cout << " XOR " << z << endl;
    counter += z;
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

int useKomb(vector<int>& nums, int k){
     sort(nums.begin(), nums.end());
     int counter = 0;
     vector<int> comb;
     generateCombinations(nums, comb, 0 , k, doCount , counter );
     return counter;
}


class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int s = 0;
        vector<int> r;
        for (int k = 1; k<=nums.size(); k++){
            r.push_back(useKomb(nums, k));
        };
        // for(auto x : r) cout << x << " "; cout << endl;
        for(auto x : r) s += x;
        return s;
    }
};