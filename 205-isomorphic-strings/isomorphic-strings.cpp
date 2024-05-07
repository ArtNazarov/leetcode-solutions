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

         

        int index = 0;
        for (auto ch : s){
            auto v = m[ch];
            auto z = t[index];
            if (find(v.begin(),v.end(),z )==v.end())
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