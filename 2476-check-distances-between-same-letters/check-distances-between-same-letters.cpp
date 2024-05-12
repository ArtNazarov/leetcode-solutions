#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_set<int> st;
        for(auto ch : s) st.insert(ch);
        for(auto ch='a'; ch<='z';ch++){
            if (st.find(ch)!=st.end()){
          int index = ch - 'a';
          string p = ""; p+=ch;
          int i = s.find(p);
          int j = s.rfind(p);
          int dist = j - i - 1;
          // cout << ch << " " << dist << endl;
          if (dist != distance[index]) return false;
            };
        };
        return true;
    }
};