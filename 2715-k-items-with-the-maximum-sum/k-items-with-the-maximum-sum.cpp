#include <vector>
using namespace std;
class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
       vector<int> v(numOnes + numZeros + numNegOnes);
       fill(v.begin(), v.begin()+numOnes, 1);
       fill(v.begin()+numOnes, v.begin()+numZeros+numOnes, 0);
       fill(v.begin()+numZeros+numOnes, v.begin()+numOnes+numZeros+numNegOnes, -1);
       // for(auto x : v) cout << x << " "; cout << endl;
       int s = 0;
       int t = min((int)v.size(), k);
       for(auto i=0; i<t; i++){
        s += v[i];
       };
       return s;
    }
};