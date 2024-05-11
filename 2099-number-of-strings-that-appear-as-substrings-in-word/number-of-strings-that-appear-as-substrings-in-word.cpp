#include <map>
using namespace std;
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        map<string, int> f;
        for(auto s : patterns){
            if (f[s]!=0) { f[s]++; }
            else if (word.find(s)!=string::npos){
                f[s]++;
            };
        };
        int total = 0;
        for (auto p : f) total+=p.second;
        return total;
    }
};