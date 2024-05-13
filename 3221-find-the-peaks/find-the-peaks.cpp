#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> res;
        vector<int>& x = mountain;
        int sz = x.size();
        for(auto i=1;i<sz-1;i++){
            int prev = x[i-1];
            int next = x[i+1];
            int e = x[i];
            //cout << prev << " " << e << " " << next << endl;
            if (prev < e && next < e) res.push_back(i);
        };
        return res;
    }
};