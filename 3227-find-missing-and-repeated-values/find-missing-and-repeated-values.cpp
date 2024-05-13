#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       map<int, int> f;
       int rep = INT_MIN;
       set<int> st;
       for (int i=1;i<=grid.size()*grid.size();i++) st.insert(i);
       for (auto v : grid){
        for (auto x : v){
            st.erase(x);
            f[x]++;
            if (f[x]==2) {
                rep = x;
            };
        }; 
       };
        vector<int> res = {rep, *(st.begin())};
        return res;
    }
};