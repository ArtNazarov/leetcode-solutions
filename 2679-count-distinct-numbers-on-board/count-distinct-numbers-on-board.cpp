#include <set>
using namespace std;

class Solution {
public:
    int distinctIntegers(int n) {
      set<int> st = { n };
      int cnt = 0;
      do {
        set<int> t;
        for(auto x : st){
            // cout << "Check " << x << endl;
            for(auto i=1;i<=x;i++){
               
                if (x % i == 1 && st.find(i)==st.end()){
                    // cout << "divisor " << i << endl;
                    t.insert(i);
                };
            };    
        };
        for(auto x : t) st.insert(x);
        cnt = t.size();
      } while (cnt > 0);
      // for(auto x : st) cout << " " << x ; cout << endl;
      return st.size();
    }
};