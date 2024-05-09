class Solution {
public:
     
    int findLHS(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> f;
        for (auto v : nums) f[v]++; // counts frequency, or length subsequence equal elems
        for (auto p : f){
            // average case for map is O(log N), but unordered_map O(1)
                if (f.find(p.first+1)==f.end()) continue;
                count = max(count, f[p.first+1] + f[p.first]);
            
        };
        return count;
    }
};