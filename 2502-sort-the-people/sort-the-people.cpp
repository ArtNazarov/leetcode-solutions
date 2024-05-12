#include <vector>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
         vector<size_t> idx(names.size());
         iota(idx.begin(), idx.end(), 0);
         stable_sort(idx.begin(), idx.end(),
          [&heights](size_t ix1, size_t ix2) { return heights[ix1] > heights[ix2]; }
         );
         vector<string> res;
         for (auto ix : idx){
            res.push_back(names[ix]);
         };
         return res;

    }
};