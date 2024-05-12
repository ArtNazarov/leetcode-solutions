#include <set>
using namespace std;

bool isSame(string& s1, string& s2){
    set<char> st1;
    set<char> st2;
    for(auto x : s1) {st1.insert(x);};
    for(auto x : s2) {st2.insert(x);};
   // cout << s1 << " " << s2 << endl;
   // for(auto x : st1) {cout << x << " ";}; cout << endl;
   // for(auto x : st2) {cout << x << " ";}; cout << endl;
   // cout << (( st1 == st2 ) ? "similar" : "not similar");
   // cout << endl;
    return st1 == st2;
}

class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<string>& w = words;
        int cnt = 0;
        size_t sz = w.size();
        for(size_t i=0;i<sz-1;i++){
            for(size_t j=i+1;j<sz;j++){
                if (isSame(w[i], w[j])) cnt++;
            };
        };
        return cnt;
    }
};