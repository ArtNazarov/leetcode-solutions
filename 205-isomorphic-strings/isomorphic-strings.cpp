#include <algorithm>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.size()!=t.size()) return false; 
        map<char,vector<char>> m;
        set<char> st;

        for (auto ch : s){
            m[ch] = vector<char>();
        };

        int index = 0;
        for (auto ch : s){
           
            auto z = t[index];
            if (find(m[ch].begin(),m[ch].end(),z )==m[ch].end())
                m[ch].push_back(z);
            index++;
        };

        for (auto e : m){
            
            if (e.second.size()>1){
            return false;
            }
        }

        vector<char> h;
        for(auto p : m){
            h.push_back(p.second[0]);
        };
        int sz = h.size();
        sort(h.begin(), h.end());
        h.erase(unique(h.begin(), h.end()), h.end());
        return sz==h.size();
    }
};