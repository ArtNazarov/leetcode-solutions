#include <vector>
using namespace std;

class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int m = INT_MIN;
        for(auto x : strs){
            bool f = true;
            for(auto ch : x) f = f && isdigit(ch);
            int t = x.size();
            if (f){
                t = stoi(x);
            };
            m = max(m, t);
        };
        return m;
    }
};