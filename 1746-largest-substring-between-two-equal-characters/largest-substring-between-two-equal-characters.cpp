#include <vector>
#include <unordered_map>
using namespace std;
int mxDist(vector<int>& v){
    int r = -1;
    if (v.size()==1) return r;
    return v[v.size()-1]-v[0]-1;
}

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, vector<int>> ps;
        int index = 0;
        for(auto ch : s){
            ps[ch].push_back(index); index ++;
        };
        int r = INT_MIN;
        for (auto p : ps){
            // cout << p.first << endl;
            // for (auto x : p.second) { cout << x << " ";}; cout << endl;
            // cout << mxDist(p.second) << endl;
            r = max(r, mxDist(p.second));
        };
        return r;
        
    }
};