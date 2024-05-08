#include <vector>
#include <bitset>
using namespace std;
class Solution {
public:
    template<typename T>
    vector<T> tplCountBits(T n){
        const int BITS = sizeof(T) * 8;
        vector<T> res;
        for (int i=0;i<=n;i++){
               bitset<BITS> t(i);
               res.push_back(t.count());
        };
        return res;
    }
    vector<int> countBits(int n) {
        return tplCountBits<int>(n);
    }
};