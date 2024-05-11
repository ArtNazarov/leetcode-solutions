#include <map>
using namespace std;
class Solution {
public:
    int countPoints(string rings) {
        map<int, set<char>> f;
        for (auto i=0; i<rings.size()-1;i+=2){
            char color = rings[i];
            int n = rings[i+1] - '0';
            f[n].insert(color);
        };
        int cnt = 0;
        for(auto p : f){
            // cout << p.first << " " << p.second.size() << endl;
            if (p.second.size()>=3) cnt++;
        };
        return cnt;
    }
};