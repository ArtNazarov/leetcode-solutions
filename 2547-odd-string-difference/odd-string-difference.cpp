#include <vector>
using namespace std;

vector<int> getDiff(string& w){
    vector<int> v;
    for(auto i=1;i<w.size();i++){
        v.push_back(w[i]-w[i-1]);
    };
    return v;
}
class Solution {
public:
    string oddString(vector<string>& words) {
        map< vector<int>,  vector<string> > m;
        for(auto& w : words){
            vector<int> d = getDiff(w);
            m[d].push_back(w);
        };
        for(auto p : m){
            if (p.second.size() == 1) return p.second[0];
        };
        return "";
    }
};