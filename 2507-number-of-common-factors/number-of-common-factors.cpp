#include <set>
using namespace std;

set<int> getF(int a){
    set<int> v;
    v.insert(1);
    v.insert(a);
    int x = 2;
    while (x * x <= a){
        if (a % x == 0){
            v.insert(x);
            v.insert(a/x);
        };
     x++;
    };
    return v;
}

class Solution {
public:
    int commonFactors(int a, int b) {
        set<int> sa = getF(a);
        set<int> sb = getF(b);
        int cnt = 0;
        for(auto x : sa) if (sb.find(x)!=sb.end()) cnt++;
        return cnt;
    }
};